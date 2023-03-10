# SPDX-License-Identifier: GPL-2.0

#
# Makefile for misc devices that really don't fit anywhere else.
#

MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ifdef CONFIG_CAMERA_SAMSUNG_MODEL_NAME
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_CAMERA_SAMSUNG_MODEL_NAME))
else
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_ARCH_MTK_PROJECT))
endif

IMGSENSOR_DRIVER_PATH  := $(srctree)/drivers/misc/mediatek/imgsensor/src
COMMON_VERSION := v1

subdir-ccflags-y +=  -I$(IMGSENSOR_DRIVER_PATH)/common/$(COMMON_VERSION) \
	-I$(IMGSENSOR_DRIVER_PATH)/inc \
	-I$(IMGSENSOR_DRIVER_PATH)/common/sysfs \
	-I$(IMGSENSOR_DRIVER_PATH)/common/adaptive_mipi \
	-I$(IMGSENSOR_DRIVER_PATH)/../../mmdvfs
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor.o
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor.o
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor_hw.o
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor_i2c.o
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor_legacy.o
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor_proc.o
obj-y				+= ../common/$(COMMON_VERSION)/imgsensor_sensor_list.o

# Build sysfs folder
obj-$(CONFIG_IMGSENSOR_SYSFS) += ../common/sysfs/

# Build adaptive mipi folder
obj-$(CONFIG_CAMERA_ADAPTIVE_MIPI) += ../common/adaptive_mipi/

define FILTER_DRV
ifeq ($(wildcard $(IMGSENSOR_DRIVER_PATH)/$(MTK_PLATFORM)/camera_project/$(ARCH_MTK_PROJECT)/$(1)),)
ifeq ($(wildcard $(IMGSENSOR_DRIVER_PATH)/$(MTK_PLATFORM)/$(1)),)
ifneq (,$(wildcard $(IMGSENSOR_DRIVER_PATH)/common/$(COMMON_VERSION)/$(1)/$(ARCH_MTK_PROJECT)))
common_drv += ../common/$(COMMON_VERSION)/$(1)/$(ARCH_MTK_PROJECT)/
else
common_drv += ../common/$(COMMON_VERSION)/$(1)/
endif
else
platform_drv += $(1)/
endif
else
project_drv += ./camera_project/$(ARCH_MTK_PROJECT)/$(1)/
endif
endef


$(foreach drv,$(subst $\",,$(CONFIG_CUSTOM_KERNEL_IMGSENSOR)),$(eval $(call FILTER_DRV,$(drv))))

obj-y				+= $(common_drv)
obj-y				+= $(platform_drv)
obj-y				+= imgsensor_clk.o

ifeq (,$(wildcard $(IMGSENSOR_DRIVER_PATH)/$(MTK_PLATFORM)/camera_project/$(ARCH_MTK_PROJECT)/camera_hw))
subdir-ccflags-y		+= -I$(IMGSENSOR_DRIVER_PATH)/$(MTK_PLATFORM)/camera_hw
obj-y				+= camera_hw/
ifneq ($(project_drv),)
obj-y				+= camera_project/$(ARCH_MTK_PROJECT)/
endif
else
obj-y				+= camera_project/$(ARCH_MTK_PROJECT)/
subdir-ccflags-y		+= -I$(IMGSENSOR_DRIVER_PATH)/$(MTK_PLATFORM)/camera_project/$(ARCH_MTK_PROJECT)/camera_hw
endif

