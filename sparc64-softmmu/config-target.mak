# Automatically generated by configure - do not modify
CONFIG_QEMU_LDST_OPTIMIZATION=y
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=8
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=sparc64
TARGET_SPARC64=y
TARGET_ARCH2=sparc64
TARGET_TYPE=TARGET_TYPE_SPARC64
TARGET_BASE_ARCH=sparc
TARGET_ABI_DIR=sparc64
CONFIG_NO_XEN=y
TARGET_WORDS_BIGENDIAN=y
CONFIG_SOFTMMU=y
LIBS+=-lutil  -lpng12   -lSDL   -lX11  -L$(BUILD_DIR)/pixman/pixman/.libs -lpixman-1 
CONFIG_I386_DIS=y
CONFIG_SPARC_DIS=y
LDFLAGS+=
QEMU_CFLAGS+=
QEMU_INCLUDES+=-I$(SRC_PATH)/linux-headers -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/$(ARCH) 
