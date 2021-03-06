# Automatically generated by configure - do not modify
CONFIG_QEMU_PREFIX="/usr/gnemul/qemu-arm"
TARGET_ARCH=arm
TARGET_ARM=y
TARGET_ARCH2=arm
TARGET_BASE_ARCH=arm
TARGET_ABI_DIR=arm
TARGET_PHYS_ADDR_BITS=64
CONFIG_SOFTMMU=y
LIBS+=-lutil -lncurses  -L/usr/lib/x86_64-linux-gnu -lSDL -lX11 
HWLIB=../libhw64/libqemuhw64.a
TARGET_XML_FILES= /home/josh/sdb2/Lab/PQEMU/gdb-xml/arm-core.xml /home/josh/sdb2/Lab/PQEMU/gdb-xml/arm-vfp.xml /home/josh/sdb2/Lab/PQEMU/gdb-xml/arm-vfp3.xml /home/josh/sdb2/Lab/PQEMU/gdb-xml/arm-neon.xml
CONFIG_SOFTFLOAT=y
CONFIG_I386_DIS=y
CONFIG_ARM_DIS=y
LDFLAGS+=
QEMU_CFLAGS+=-DHAS_AUDIO -I$(SRC_PATH)/fpu -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/$(ARCH) 
