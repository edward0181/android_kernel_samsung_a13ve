cmd_firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o := ../clang/bin/clang -Wp,-MD,firmware/tsp_novatek/.nt36672_a13ve_csot.bin.gen.o.d -nostdinc -isystem /home/edward/lineage/kernel/samsung/a13ve/clang/lib/clang/13.0.0/include -I../arch/arm64/include -I./arch/arm64/include/generated  -I../include -I../drivers/misc/mediatek/include -I./include -I../arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I../include/uapi -I./include/generated/uapi -include ../include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -Qunused-arguments -D__ASSEMBLY__ --target=aarch64-buildroot-linux-gnu --prefix=/home/edward/lineage/kernel/samsung/a13ve/gcc/bin/aarch64-buildroot-linux-gnu- --gcc-toolchain=/home/edward/lineage/kernel/samsung/a13ve/gcc -no-integrated-as -Werror=unknown-warning-option -fno-builtin-stpcpy -fno-PIE -DCONFIG_AS_LSE=1 -DKASAN_SHADOW_SCALE_SHIFT=3   -c -o firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.S

source_firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o := firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.S

deps_firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o := \
  ../include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \

firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o: $(deps_firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o)

$(deps_firmware/tsp_novatek/nt36672_a13ve_csot.bin.gen.o):
