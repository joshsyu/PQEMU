Based on Qemu 1.3.1
Please find correspoding cpu, board and image.

# Installation

    ./configure --target-list=arm-softmmu

    make -j [core]

# Execution

    arm-softmmu/qemu-system-arm \
      -kernel $kernel(vmlinuz) \
      -initrd $file_system(initrd.img) \
      -drive if=sd,cache=writeback,file=$image(vexpress.img) \
      -cpu cortex-a9 \
      -M vexpress-a9 \
      -m 1024 \
      -nographic \
      -smp 2 \


