# Automatically generated by configure - do not modify
CONFIG_QEMU_LDST_OPTIMIZATION=y
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=4
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=sparc
TARGET_SPARC=y
TARGET_ARCH2=sparc
TARGET_TYPE=TARGET_TYPE_SPARC
TARGET_BASE_ARCH=sparc
TARGET_ABI_DIR=sparc
CONFIG_NO_XEN=y
TARGET_WORDS_BIGENDIAN=y
CONFIG_USER_ONLY=y
CONFIG_QEMU_INTERP_PREFIX="/usr/gnemul/qemu-sparc"
CONFIG_LINUX_USER=y
CONFIG_USE_GUEST_BASE=y
CONFIG_I386_DIS=y
CONFIG_SPARC_DIS=y
LDFLAGS+=-Wl,-T../config-host.ld -Wl,-T,$(SRC_PATH)/$(ARCH).ld 
QEMU_CFLAGS+=
QEMU_INCLUDES+=-I$(SRC_PATH)/linux-headers -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/$(ARCH) 
