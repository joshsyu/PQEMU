# Automatically generated by configure - do not modify
TARGET_ABI32=y
CONFIG_QEMU_LDST_OPTIMIZATION=y
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=4
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=ppc64
TARGET_PPC64=y
TARGET_ARCH2=ppc64abi32
TARGET_TYPE=TARGET_TYPE_PPC64ABI32
TARGET_BASE_ARCH=ppc
TARGET_ABI_DIR=ppc
CONFIG_NO_XEN=y
TARGET_WORDS_BIGENDIAN=y
CONFIG_USER_ONLY=y
CONFIG_QEMU_INTERP_PREFIX="/usr/gnemul/qemu-ppc64abi32"
CONFIG_LINUX_USER=y
TARGET_XML_FILES= /home/lu/qemu/Linaro_new/qemu-1.3.1/gdb-xml/power64-core.xml /home/lu/qemu/Linaro_new/qemu-1.3.1/gdb-xml/power-fpu.xml /home/lu/qemu/Linaro_new/qemu-1.3.1/gdb-xml/power-altivec.xml /home/lu/qemu/Linaro_new/qemu-1.3.1/gdb-xml/power-spe.xml
CONFIG_USE_GUEST_BASE=y
CONFIG_I386_DIS=y
CONFIG_PPC_DIS=y
LDFLAGS+=-Wl,-T../config-host.ld -Wl,-T,$(SRC_PATH)/$(ARCH).ld 
QEMU_CFLAGS+=
QEMU_INCLUDES+=-I$(SRC_PATH)/linux-headers -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/$(ARCH) 