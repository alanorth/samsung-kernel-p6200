#!/bin/bash

function setenv {
	echo -n "Setting ARM environment..."
	export ARCH=arm
	export CROSS_COMPILE="ccache /home/aorth/src/android-ndk-r6/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-"
	echo " done."

	echo -n "Setting other environment variables..."
	# the kernel version we're compiling for
	# ... this corresponds to DXKL3
	export LOCALVERSION="-P6200DXKL3-CL608366"
	# the number of CPUs to use when compiling the kernel (auto detect all available)
	export CPUS=`grep -c processor /proc/cpuinfo`
	echo " done."
}

setenv

rm -rf usr/initramfs
cp -R ../GT-P6200-initramfs/DXKL3 usr/initramfs
make clean
schedtool -B -n19 -e make -j${CPUS} modules
cp $(find . -name "*.ko") usr/initramfs/lib/modules/
schedtool -B -n19 -e make -j${CPUS}

if [ $? -eq 0 ]
then
	echo "Mmm... smells like bacon!"
	ls -l arch/arm/boot/zImage
fi
