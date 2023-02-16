cmd_drivers/misc/mediatek/lcm/lcm_i2c.o := ../clang/bin/clang -Wp,-MD,drivers/misc/mediatek/lcm/.lcm_i2c.o.d -nostdinc -isystem /home/edward/lineage/kernel/samsung/a13ve/clang/lib/clang/13.0.0/include -I../arch/arm64/include -I./arch/arm64/include/generated  -I../include -I../drivers/misc/mediatek/include -I./include -I../arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I../include/uapi -I./include/generated/uapi -include ../include/linux/kconfig.h -include ../include/linux/compiler_types.h  -I../drivers/misc/mediatek/lcm -Idrivers/misc/mediatek/lcm -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -Qunused-arguments -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Wno-format-security -pipe -std=gnu89 --target=aarch64-buildroot-linux-gnu --prefix=/home/edward/lineage/kernel/samsung/a13ve/gcc/bin/aarch64-buildroot-linux-gnu- --gcc-toolchain=/home/edward/lineage/kernel/samsung/a13ve/gcc -no-integrated-as -Werror=unknown-warning-option -fno-builtin-stpcpy -fno-PIE -mgeneral-regs-only -DCONFIG_AS_LSE=1 -fno-asynchronous-unwind-tables -Wno-psabi -DKASAN_SHADOW_SCALE_SHIFT=3 -fno-delete-null-pointer-checks -Wno-frame-address -Wno-int-in-bool-context -Wno-address-of-packed-member -O3 -Wframe-larger-than=2800 -fstack-protector-strong -Wno-format-invalid-specifier -Wno-gnu -Wno-tautological-compare -mno-global-merge -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -Wdeclaration-after-statement -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-merge-all-constants -fno-stack-check -Werror=implicit-int -Werror=date-time -fmacro-prefix-map=../= -Wno-initializer-overrides -Wno-unused-value -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-uninitialized -Wno-pointer-to-enum-cast -w -Werror -Wno-unused-but-set-variable  -I../drivers/misc/mediatek/include  -I../drivers/misc/mediatek/include/mt-plat/mt6768/include  -I../drivers/misc/mediatek/include/mt-plat/  -I../drivers/mmc/host/mediatek/mt6768  -I../drivers/misc/mediatek/include/mt-plat/v1  -I../drivers/misc/mediatek/lcm/inc  -I../drivers/misc/mediatek/video/mt6768/dispsys  -I../drivers/misc/mediatek/video/mt6768/dispsys/mt6735  -I../drivers/misc/mediatek/video/mt6768/videox  -I../drivers/misc/mediatek/video/include -DSMCDSD_PANEL -DMTK_LCM_PHYSICAL_ROTATION=\"\"    -DKBUILD_BASENAME='"lcm_i2c"' -DKBUILD_MODNAME='"lcm_i2c"' -c -o drivers/misc/mediatek/lcm/.tmp_lcm_i2c.o ../drivers/misc/mediatek/lcm/lcm_i2c.c

source_drivers/misc/mediatek/lcm/lcm_i2c.o := ../drivers/misc/mediatek/lcm/lcm_i2c.c

deps_drivers/misc/mediatek/lcm/lcm_i2c.o := \
    $(wildcard include/config/mtk/legacy.h) \
    $(wildcard include/config/fpga/early/porting.h) \
  ../include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  ../include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  ../include/linux/compiler-clang.h \
    $(wildcard include/config/lto/clang.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \

drivers/misc/mediatek/lcm/lcm_i2c.o: $(deps_drivers/misc/mediatek/lcm/lcm_i2c.o)

$(deps_drivers/misc/mediatek/lcm/lcm_i2c.o):
