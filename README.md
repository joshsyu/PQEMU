Based on Qemu 0.8  
Please find correspoding cpu, board and image.

# Installation

    ./configure --target-list=arm-softmmu --enable-pvc --enable-io-thread --enable-pvc-scc

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
