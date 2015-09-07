# Automatically generated by configure - do not modify
CONFIG_QEMU_INTERP_PREFIX="/usr/gnemul/qemu-x86_64"
TARGET_ARCH=x86_64
TARGET_X86_64=y
TARGET_ARCH2=x86_64
TARGET_BASE_ARCH=i386
TARGET_ABI_DIR=x86_64
CONFIG_KVM=y
KVM_CFLAGS=
CONFIG_KVM_PARA=y
TARGET_PHYS_ADDR_BITS=64
CONFIG_SOFTMMU=y
LIBS+=-lutil -lcurl   -lncurses  -luuid -lpng -ljpeg -lsasl2 -lgnutls   -lSDL -lpthread   -lX11 
HWDIR=../libhw64
CONFIG_NOSOFTFLOAT=y
CONFIG_I386_DIS=y
CONFIG_I386_DIS=y
CONFIG_PVC=y
CONFIG_PVC_SCC=y
LDFLAGS+=
QEMU_CFLAGS+=-DHAS_AUDIO -DHAS_AUDIO_CHOICE 
QEMU_INCLUDES+=-I$(SRC_PATH)/fpu -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/i386 
