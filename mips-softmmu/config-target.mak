# Automatically generated by configure - do not modify
TARGET_ABI_MIPSO32=y
CONFIG_QEMU_LDST_OPTIMIZATION=y
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=4
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=mips
TARGET_MIPS=y
TARGET_ARCH2=mips
TARGET_TYPE=TARGET_TYPE_MIPS
TARGET_BASE_ARCH=mips
TARGET_ABI_DIR=mips
CONFIG_NO_XEN=y
TARGET_WORDS_BIGENDIAN=y
CONFIG_SOFTMMU=y
LIBS+=-lutil  -lpng12   -lSDL   -lX11  -L$(BUILD_DIR)/pixman/pixman/.libs -lpixman-1 
CONFIG_PCSPK=y
CONFIG_I386_DIS=y
CONFIG_MIPS_DIS=y
LDFLAGS+=
QEMU_CFLAGS+=-DHAS_AUDIO -DHAS_AUDIO_CHOICE 
QEMU_INCLUDES+=-I$(SRC_PATH)/linux-headers -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/$(ARCH) 
