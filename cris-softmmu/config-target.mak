# Automatically generated by configure - do not modify
CONFIG_QEMU_LDST_OPTIMIZATION=y
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=4
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=cris
TARGET_CRIS=y
TARGET_ARCH2=cris
TARGET_TYPE=TARGET_TYPE_CRIS
TARGET_BASE_ARCH=cris
TARGET_ABI_DIR=cris
CONFIG_NO_XEN=y
CONFIG_SOFTMMU=y
LIBS+=-lutil  -lpng12   -lSDL   -lX11  -L$(BUILD_DIR)/pixman/pixman/.libs -lpixman-1 
CONFIG_I386_DIS=y
CONFIG_CRIS_DIS=y
LDFLAGS+=
QEMU_CFLAGS+=
QEMU_INCLUDES+=-I$(SRC_PATH)/linux-headers -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/$(ARCH) 
