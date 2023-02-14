#!/bin/bash
# Clone GCC & Proton Clang.
[[ -d "$(pwd)/gcc/" ]] || git clone https://github.com/VH-Devices/toolchains -b gcc-10.3.0 gcc --depth 1 >> /dev/null 2> /dev/null
[[ -d "$(pwd)/clang/" ]] || git clone https://github.com/kdrag0n/proton-clang clang --depth 1 >> /dev/null 2> /dev/null

# version numbering
vers=$(cat versioning.txt)
version=$(expr ${vers} + 1)
rm -rf versioning.txt
echo ${version} >> versioning.txt

export CROSS_COMPILE="$(pwd)/gcc/bin/aarch64-buildroot-linux-gnu-"
export CLANG_TRIPLE="aarch64-buildroot-linux-gnu-"
export CC="$(pwd)/clang/bin/clang"
export ARCH=arm64
export VARIANT="A13"
export PLATFORM_VERSION=13
export ANDROID_MAJOR_VERSION=t
export LOCALVERSION=-chernobyl-V${vers}
export KCFLAGS=-w
export CONFIG_SECTION_MISMATCH_WARN_ONLY=y

make clean
rm -rf out

make -C $(pwd) O=$(pwd)/out KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y a13ve_defconfig
make -C $(pwd) O=$(pwd)/out KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y -j6

git clone https://github.com/osm0sis/AnyKernel3 $(pwd)/AnyKernel3
cd AnyKernel3
git reset --hard HEAD
cp $(pwd)/../out/arch/arm64/boot/Image.gz Image.gz
rm -rf anykernel.sh
cp ../ak3-script/anykernel.sh ./
zip -r9 $(pwd)/../${VARIANT}_chernobylkernel_${vers}.zip * -x .git README.md *placeholder

#cp out/arch/arm64/boot/Image.gz $(pwd)/arch/arm64/boot/Image.gz
