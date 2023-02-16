	.text
	.file	"asm-offsets.c"
	.globl	main                            // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
// %bb.0:
	//APP
	
.ascii "->TSK_ACTIVE_MM 1288 offsetof(struct task_struct, active_mm)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->TSK_TI_FLAGS 0 offsetof(struct task_struct, thread_info.flags)"
	//NO_APP
	//APP
	
.ascii "->TSK_TI_PREEMPT 24 offsetof(struct task_struct, thread_info.preempt_count)"
	//NO_APP
	//APP
	
.ascii "->TSK_TI_ADDR_LIMIT 8 offsetof(struct task_struct, thread_info.addr_limit)"
	//NO_APP
	//APP
	
.ascii "->TSK_TI_TTBR0 16 offsetof(struct task_struct, thread_info.ttbr0)"
	//NO_APP
	//APP
	
.ascii "->TSK_STACK 40 offsetof(struct task_struct, stack)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->THREAD_CPU_CONTEXT 2736 offsetof(struct task_struct, thread.cpu_context)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->S_X0 0 offsetof(struct pt_regs, regs[0])"
	//NO_APP
	//APP
	
.ascii "->S_X1 8 offsetof(struct pt_regs, regs[1])"
	//NO_APP
	//APP
	
.ascii "->S_X2 16 offsetof(struct pt_regs, regs[2])"
	//NO_APP
	//APP
	
.ascii "->S_X3 24 offsetof(struct pt_regs, regs[3])"
	//NO_APP
	//APP
	
.ascii "->S_X4 32 offsetof(struct pt_regs, regs[4])"
	//NO_APP
	//APP
	
.ascii "->S_X5 40 offsetof(struct pt_regs, regs[5])"
	//NO_APP
	//APP
	
.ascii "->S_X6 48 offsetof(struct pt_regs, regs[6])"
	//NO_APP
	//APP
	
.ascii "->S_X7 56 offsetof(struct pt_regs, regs[7])"
	//NO_APP
	//APP
	
.ascii "->S_X8 64 offsetof(struct pt_regs, regs[8])"
	//NO_APP
	//APP
	
.ascii "->S_X10 80 offsetof(struct pt_regs, regs[10])"
	//NO_APP
	//APP
	
.ascii "->S_X12 96 offsetof(struct pt_regs, regs[12])"
	//NO_APP
	//APP
	
.ascii "->S_X14 112 offsetof(struct pt_regs, regs[14])"
	//NO_APP
	//APP
	
.ascii "->S_X16 128 offsetof(struct pt_regs, regs[16])"
	//NO_APP
	//APP
	
.ascii "->S_X18 144 offsetof(struct pt_regs, regs[18])"
	//NO_APP
	//APP
	
.ascii "->S_X20 160 offsetof(struct pt_regs, regs[20])"
	//NO_APP
	//APP
	
.ascii "->S_X22 176 offsetof(struct pt_regs, regs[22])"
	//NO_APP
	//APP
	
.ascii "->S_X24 192 offsetof(struct pt_regs, regs[24])"
	//NO_APP
	//APP
	
.ascii "->S_X26 208 offsetof(struct pt_regs, regs[26])"
	//NO_APP
	//APP
	
.ascii "->S_X28 224 offsetof(struct pt_regs, regs[28])"
	//NO_APP
	//APP
	
.ascii "->S_LR 240 offsetof(struct pt_regs, regs[30])"
	//NO_APP
	//APP
	
.ascii "->S_SP 248 offsetof(struct pt_regs, sp)"
	//NO_APP
	//APP
	
.ascii "->S_COMPAT_SP 104 offsetof(struct pt_regs, compat_sp)"
	//NO_APP
	//APP
	
.ascii "->S_PSTATE 264 offsetof(struct pt_regs, pstate)"
	//NO_APP
	//APP
	
.ascii "->S_PC 256 offsetof(struct pt_regs, pc)"
	//NO_APP
	//APP
	
.ascii "->S_ORIG_X0 272 offsetof(struct pt_regs, orig_x0)"
	//NO_APP
	//APP
	
.ascii "->S_SYSCALLNO 280 offsetof(struct pt_regs, syscallno)"
	//NO_APP
	//APP
	
.ascii "->S_ORIG_ADDR_LIMIT 288 offsetof(struct pt_regs, orig_addr_limit)"
	//NO_APP
	//APP
	
.ascii "->S_STACKFRAME 304 offsetof(struct pt_regs, stackframe)"
	//NO_APP
	//APP
	
.ascii "->S_FRAME_SIZE 320 sizeof(struct pt_regs)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->COMPAT_SIGFRAME_REGS_OFFSET 32 offsetof(struct compat_sigframe, uc.uc_mcontext.arm_r0)"
	//NO_APP
	//APP
	
.ascii "->COMPAT_RT_SIGFRAME_REGS_OFFSET 160 offsetof(struct compat_rt_sigframe, sig.uc.uc_mcontext.arm_r0)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->MM_CONTEXT_ID 760 offsetof(struct mm_struct, context.id.counter)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->VMA_VM_MM 64 offsetof(struct vm_area_struct, vm_mm)"
	//NO_APP
	//APP
	
.ascii "->VMA_VM_FLAGS 80 offsetof(struct vm_area_struct, vm_flags)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->VM_EXEC 4 VM_EXEC"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->PAGE_SZ 4096 PAGE_SIZE"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->DMA_BIDIRECTIONAL 0 DMA_BIDIRECTIONAL"
	//NO_APP
	//APP
	
.ascii "->DMA_TO_DEVICE 1 DMA_TO_DEVICE"
	//NO_APP
	//APP
	
.ascii "->DMA_FROM_DEVICE 2 DMA_FROM_DEVICE"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->PREEMPT_DISABLE_OFFSET 1 PREEMPT_DISABLE_OFFSET"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->CLOCK_REALTIME 0 CLOCK_REALTIME"
	//NO_APP
	//APP
	
.ascii "->CLOCK_MONOTONIC 1 CLOCK_MONOTONIC"
	//NO_APP
	//APP
	
.ascii "->CLOCK_MONOTONIC_RAW 4 CLOCK_MONOTONIC_RAW"
	//NO_APP
	//APP
	
.ascii "->CLOCK_REALTIME_RES 232 offsetof(struct vdso_data, hrtimer_res)"
	//NO_APP
	//APP
	
.ascii "->CLOCK_REALTIME_COARSE 5 CLOCK_REALTIME_COARSE"
	//NO_APP
	//APP
	
.ascii "->CLOCK_MONOTONIC_COARSE 6 CLOCK_MONOTONIC_COARSE"
	//NO_APP
	//APP
	
.ascii "->CLOCK_COARSE_RES 4000000 LOW_RES_NSEC"
	//NO_APP
	//APP
	
.ascii "->NSEC_PER_SEC 1000000000 NSEC_PER_SEC"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->VDSO_SEQ 0 offsetof(struct vdso_data, seq)"
	//NO_APP
	//APP
	
.ascii "->VDSO_CLK_MODE 4 offsetof(struct vdso_data, clock_mode)"
	//NO_APP
	//APP
	
.ascii "->VDSO_CYCLE_LAST 8 offsetof(struct vdso_data, cycle_last)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MASK 16 offsetof(struct vdso_data, mask)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MULT 24 offsetof(struct vdso_data, mult)"
	//NO_APP
	//APP
	
.ascii "->VDSO_SHIFT 28 offsetof(struct vdso_data, shift)"
	//NO_APP
	//APP
	
.ascii "->VDSO_REALTIME_SEC 32 offsetof(struct vdso_data, basetime[CLOCK_REALTIME].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_REALTIME_NSEC 40 offsetof(struct vdso_data, basetime[CLOCK_REALTIME].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MONO_SEC 48 offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MONO_NSEC 56 offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MONO_RAW_SEC 96 offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_RAW].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MONO_RAW_NSEC 104 offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_RAW].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_BOOTTIME_SEC 144 offsetof(struct vdso_data, basetime[CLOCK_BOOTTIME].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_BOOTTIME_NSEC 152 offsetof(struct vdso_data, basetime[CLOCK_BOOTTIME].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_TAI_SEC 208 offsetof(struct vdso_data, basetime[CLOCK_TAI].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_TAI_NSEC 216 offsetof(struct vdso_data, basetime[CLOCK_TAI].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_RT_COARSE_SEC 112 offsetof(struct vdso_data, basetime[CLOCK_REALTIME_COARSE].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_RT_COARSE_NSEC 120 offsetof(struct vdso_data, basetime[CLOCK_REALTIME_COARSE].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MONO_COARSE_SEC 128 offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_COARSE].sec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_MONO_COARSE_NSEC 136 offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_COARSE].nsec)"
	//NO_APP
	//APP
	
.ascii "->VDSO_TZ_MINWEST 224 offsetof(struct vdso_data, tz_minuteswest)"
	//NO_APP
	//APP
	
.ascii "->VDSO_TZ_DSTTIME 228 offsetof(struct vdso_data, tz_dsttime)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->TVAL_TV_SEC 0 offsetof(struct timeval, tv_sec)"
	//NO_APP
	//APP
	
.ascii "->TVAL_TV_USEC 8 offsetof(struct timeval, tv_usec)"
	//NO_APP
	//APP
	
.ascii "->TSPEC_TV_SEC 0 offsetof(struct timespec, tv_sec)"
	//NO_APP
	//APP
	
.ascii "->TSPEC_TV_NSEC 8 offsetof(struct timespec, tv_nsec)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->TZ_MINWEST 0 offsetof(struct timezone, tz_minuteswest)"
	//NO_APP
	//APP
	
.ascii "->TZ_DSTTIME 4 offsetof(struct timezone, tz_dsttime)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->CPU_BOOT_STACK 0 offsetof(struct secondary_data, stack)"
	//NO_APP
	//APP
	
.ascii "->CPU_BOOT_TASK 8 offsetof(struct secondary_data, task)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->CPU_SUSPEND_SZ 112 sizeof(struct cpu_suspend_ctx)"
	//NO_APP
	//APP
	
.ascii "->CPU_CTX_SP 104 offsetof(struct cpu_suspend_ctx, sp)"
	//NO_APP
	//APP
	
.ascii "->MPIDR_HASH_MASK 0 offsetof(struct mpidr_hash, mask)"
	//NO_APP
	//APP
	
.ascii "->MPIDR_HASH_SHIFTS 8 offsetof(struct mpidr_hash, shift_aff)"
	//NO_APP
	//APP
	
.ascii "->SLEEP_STACK_DATA_SYSTEM_REGS 0 offsetof(struct sleep_stack_data, system_regs)"
	//NO_APP
	//APP
	
.ascii "->SLEEP_STACK_DATA_CALLEE_REGS 112 offsetof(struct sleep_stack_data, callee_saved_regs)"
	//NO_APP
	//APP
	
.ascii "->ARM_SMCCC_RES_X0_OFFS 0 offsetof(struct arm_smccc_res, a0)"
	//NO_APP
	//APP
	
.ascii "->ARM_SMCCC_RES_X2_OFFS 16 offsetof(struct arm_smccc_res, a2)"
	//NO_APP
	//APP
	
.ascii "->ARM_SMCCC_QUIRK_ID_OFFS 0 offsetof(struct arm_smccc_quirk, id)"
	//NO_APP
	//APP
	
.ascii "->ARM_SMCCC_QUIRK_STATE_OFFS 8 offsetof(struct arm_smccc_quirk, state)"
	//NO_APP
	//APP
	
.ascii "->"
	//NO_APP
	//APP
	
.ascii "->HIBERN_PBE_ORIG 8 offsetof(struct pbe, orig_address)"
	//NO_APP
	//APP
	
.ascii "->HIBERN_PBE_ADDR 0 offsetof(struct pbe, address)"
	//NO_APP
	//APP
	
.ascii "->HIBERN_PBE_NEXT 16 offsetof(struct pbe, next)"
	//NO_APP
	//APP
	
.ascii "->ARM64_FTR_SYSVAL 24 offsetof(struct arm64_ftr_reg, sys_val)"
	//NO_APP
	mov	w0, wzr
	//APP
	
.ascii "->"
	//NO_APP
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        // -- End function
	.ident	"Proton clang version 13.0.0 (https://github.com/llvm/llvm-project b4fd512c36ca344a3ff69350219e8b0a67e9472a)"
	.section	".note.GNU-stack","",@progbits
