/*
 * sec_debug_auto_comment.c
 *
 * Copyright (c) 2022 Samsung Electronics Co., Ltd
 *              http://www.samsung.com
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#include <linux/kernel.h>
#include <linux/file.h>
#include <linux/uaccess.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/kallsyms.h>
#include <linux/memblock.h>
#include <linux/sec_debug.h>
#include <linux/vmalloc.h>
#include <linux/slab.h>
#include <asm/sections.h>
#include <linux/memblock.h>
#include <linux/of.h>
#include <linux/of_reserved_mem.h>

static u32 sec_auto_comment_base;

static struct sec_debug_auto_comm_log_idx ac_idx[SEC_DEBUG_AUTO_COMM_BUF_SIZE];
static struct sec_debug_auto_comment *auto_comment_info;
static char *auto_comment_buf;

void sec_debug_auto_comment_log_disable(int type)
{
	atomic_inc(&(ac_idx[type].logging_disable));
}

void sec_debug_auto_comment_log_once(int type)
{
	if (atomic64_read(&(ac_idx[type].logging_entry)))
		sec_debug_auto_comment_log_disable(type);
	else
		atomic_inc(&(ac_idx[type].logging_entry));
}

static inline void sec_debug_hook_auto_comm(int type, const char *buf, size_t size)
{
	struct sec_debug_auto_comm_buf *p = &auto_comment_info->auto_comm_buf[type];
	unsigned int offset = p->offset;

	if (atomic64_read(&(ac_idx[type].logging_disable)))
		return;

	if (offset + size > SZ_4K)
		return;

	if (init_data[type].max_count &&
	    (atomic64_read(&(ac_idx[type].logging_count)) > init_data[type].max_count))
		return;

	if (!(auto_comment_info->fault_flag & 1 << type)) {
		auto_comment_info->fault_flag |= 1 << type;
		if (init_data[type].prio_level == PRIO_LV5) {
			auto_comment_info->lv5_log_order |= type << auto_comment_info->lv5_log_cnt * 4;
			auto_comment_info->lv5_log_cnt++;
		}
		auto_comment_info->order_map[auto_comment_info->order_map_cnt++] = type;
	}

	atomic_inc(&(ac_idx[type].logging_count));

	memcpy(p->buf + offset, buf, size);
	p->offset += (unsigned int)size;
}

static int sec_debug_auto_comment_init_print_buf(void)
{
	auto_comment_buf = (char *)phys_to_virt(sec_auto_comment_base);
	auto_comment_info = (struct sec_debug_auto_comment *)(phys_to_virt(sec_auto_comment_base) + SZ_8K);

	if (!auto_comment_buf || !auto_comment_info) {
		pr_crit("%s: no buffer for auto comment\n", __func__);
		return 0;
	}

	memset(auto_comment_info, 0, sizeof(struct sec_debug_auto_comment));

	register_set_auto_comm_buf(sec_debug_hook_auto_comm);

	pr_info("%s: done\n", __func__);

	return 1;
}

#if 0
static unsigned long sas_size;
static unsigned long sas_base;

static void * __init sec_debug_auto_comment_remap(unsigned long size, unsigned long base)
{
	unsigned long i;
	pgprot_t prot = __pgprot(PROT_NORMAL_NC);
	int page_size;
	struct page *page;
	struct page **pages;
	void *addr;

	pr_info("%s: base: 0x%lx size: 0x%lx\n", __func__, base, size);

	page_size = (size + PAGE_SIZE - 1) / PAGE_SIZE; 

	pages = kzalloc(sizeof(struct page *) * page_size, GFP_KERNEL);
	if (!pages) {
		pr_err("%s: failed to allocate pages\n", __func__);

		return NULL;
	}

	page = phys_to_page(base);

	for (i = 0; i < page_size; i++)
		pages[i] = page++;

	addr = vm_map_ram(pages, page_size, -1, prot);
	if (!addr) {
		pr_err("%s: failed to mapping between virt and phys\n", __func__);
		kfree(pages);
		return NULL;
	}

	pr_info("%s: virt: 0x%p\n", __func__, addr);

	kfree(pages);

	return addr;
}

static int __init sec_debug_auto_comment_log_setup(char *str)
{
	unsigned long size = memparse(str, &str);
	unsigned long base = 0;

	/* If we encounter any problem parsing str ... */
	if (!size || *str != '@' || kstrtoul(str + 1, 0, &base)) {
		pr_err("%s: failed to parse address.\n", __func__);

		return -1;
	}

	if (size < sizeof(struct sec_debug_auto_comment)) {
		pr_err("%s: not enough size for auto comment\n", __func__);

		return -1;
	}

	sas_base = base;
	sas_size = size;

#ifdef CONFIG_NO_BOOTMEM
	if (memblock_is_region_reserved(base, size) ||
	    memblock_reserve(base, size)) {
#else
	if (reserve_bootmem(base, size, BOOTMEM_EXCLUSIVE)) {
#endif
		/* size is not match with -size and size + sizeof(...) */
		pr_err("%s: failed to reserve size:0x%lx at base 0x%lx\n",
		       __func__, size, base);

		sas_base = 0;
		sas_size = 0;

		return -1;
	}

	return 1;
}
__setup("auto_comment_log=", sec_debug_auto_comment_log_setup);

static int __init sec_debug_auto_comment_base_init(void)
{
	void *addr;

	if (!sas_size) {
		pr_err("%s: failed to get size of auto comment\n", __func__);

		return -1;
	}

	addr = sec_debug_auto_comment_remap(sas_size, sas_base);
	if (!addr) {
		pr_err("%s: failed to remap size:0x%lx at base 0x%lx\n",
				__func__, sas_size, sas_base);
		return -1;
	}

	sec_debug_auto_comment_init_print_buf((unsigned long)addr);

	return 0;
}
early_initcall(sec_debug_auto_comment_base_init);

static int __init sec_debug_auto_comment_log_init(void)
{
	if (auto_comment_info) {
		auto_comment_info->header_magic = AC_MAGIC;
		auto_comment_info->tail_magic = AC_TAIL_MAGIC;
	}

	pr_debug("%s, done.\n", __func__);

	return 0;
}
subsys_initcall(sec_debug_auto_comment_log_init);
#endif

static ssize_t sec_debug_auto_comment_proc_read(struct file *file, char __user *buf, size_t len, loff_t *offset)
{
	loff_t pos = *offset;
	ssize_t count;

	if (!auto_comment_buf) {
		pr_err("%s : buffer is null\n", __func__);
		return -ENODEV;
	}

	if (pos > AC_SIZE) {
		pr_err("%s : pos 0x%llx\n", __func__, pos);
		return 0;
	}

	if (strncmp(auto_comment_buf, "@ Ramdump", 9)) {
		pr_err("%s : no data in auto_comment\n", __func__);
		return 0;
	}

	count = min(len, (size_t)(AC_SIZE - pos));
	if (copy_to_user(buf, auto_comment_buf + pos, count))
		return -EFAULT;

	*offset += count;
	return count;
}

static const struct file_operations sec_debug_auto_comment_proc_fops = {
	.owner = THIS_MODULE,
	.read = sec_debug_auto_comment_proc_read,
};

static int __init sec_debug_auto_comment_proc_init(void)
{
	struct proc_dir_entry *entry;

	pr_info("%s: start\n", __func__);

	entry = proc_create("auto_comment", 0400, NULL,
					&sec_debug_auto_comment_proc_fops);

	if (!entry)
		return -ENOMEM;

	proc_set_size(entry, AC_SIZE);

	pr_info("%s: done\n", __func__);

	return 0;
}
late_initcall(sec_debug_auto_comment_proc_init);

static int __init sec_debug_auto_comment_init(void)
{
	int i;
	struct reserved_mem *rmem;

	rmem = sec_log_get_rmem("samsung,sec-autocomment");
	sec_auto_comment_base = rmem->base;	

	if (!sec_debug_auto_comment_init_print_buf())
		return -1;

	pr_info("%s: start\n", __func__);

	if (auto_comment_info) {
		auto_comment_info->header_magic = AC_MAGIC;
		auto_comment_info->tail_magic = AC_TAIL_MAGIC;
	}

	for (i = 0; i < SEC_DEBUG_AUTO_COMM_BUF_SIZE; i++) {
		atomic_set(&(ac_idx[i].logging_entry), 0);
		atomic_set(&(ac_idx[i].logging_disable), 0);
		atomic_set(&(ac_idx[i].logging_count), 0);
	}

	pr_info("%s: done\n", __func__);

	return 0;
}
early_initcall(sec_debug_auto_comment_init);
