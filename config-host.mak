# Automatically generated by configure - do not modify
# Configured with: './configure' '--target-list=arm-softmmu'
CONFIG_QEMU_SHAREDIR="/usr/local/share/qemu"
ARCH=x86_64
STRIP_OPT=-s
HOST_LONG_BITS=64
CONFIG_POSIX=y
CONFIG_LINUX=y
CONFIG_SLIRP=y
CONFIG_AC97=y
CONFIG_ES1370=y
CONFIG_SB16=y
CONFIG_AUDIO_DRIVERS=oss
CONFIG_OSS=y
CONFIG_BDRV_WHITELIST=
CONFIG_FNMATCH=y
VERSION=0.12.1
PKGVERSION=
SRC_PATH=/home/josh/sdb2/Lab/PQEMU
TARGET_DIRS=arm-softmmu
CONFIG_SDL=y
SDL_CFLAGS=-I/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT
CONFIG_CURSES=y
CONFIG_ATFILE=y
CONFIG_UTIMENSAT=y
CONFIG_PIPE2=y
CONFIG_ACCEPT4=y
CONFIG_SPLICE=y
CONFIG_EVENTFD=y
CONFIG_FALLOCATE=y
CONFIG_DUP3=y
CONFIG_INOTIFY=y
CONFIG_BYTESWAP_H=y
INSTALL_BLOBS=yes
CONFIG_IOVEC=y
CONFIG_PREADV=y
CONFIG_GCC_ATTRIBUTE_WARN_UNUSED_RESULT=y
CONFIG_FDATASYNC=y
CONFIG_UNAME_RELEASE=""
CONFIG_ZERO_MALLOC=y
HOST_USB=linux
TOOLS=qemu-nbd$(EXESUF) qemu-img$(EXESUF) qemu-io$(EXESUF) 
ROMS=optionrom
prefix=/usr/local
bindir=${prefix}/bin
mandir=${prefix}/share/man
datadir=${prefix}/share/qemu
docdir=${prefix}/share/doc/qemu
MAKE=make
INSTALL=install
INSTALL_DIR=install -d -m0755 -p
INSTALL_DATA=install -m0644 -p
INSTALL_PROG=install -m0755 -p
CC=gcc
HOST_CC=gcc
AR=ar
OBJCOPY=objcopy
LD=ld
CFLAGS=-O2 -g 
QEMU_CFLAGS=-I$(SRC_PATH)/slirp -m64 -Wold-style-definition -Wold-style-declaration -I. -I$(SRC_PATH) -U_FORTIFY_SOURCE -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wendif-labels -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing 
HELPER_CFLAGS=
LDFLAGS=-Wl,--warn-common -m64 -g 
ARLIBS_BEGIN=-Wl,--whole-archive
ARLIBS_END=-Wl,--no-whole-archive
LIBS+=-lpthread 
LIBS_TOOLS+=
EXESUF=
subdir-arm-softmmu: subdir-libhw64
