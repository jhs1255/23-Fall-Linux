obj-m = hello.o
KDIR:=\\wsl.localhost\Ubuntu-20.04\home\rokmc\WSL2-Linux-Kernel-linux-msft-wsl-5.15.133.1
PWD: $(shell pwd)

default:
	make -C $(KDIR) M=4(PWD) modules

clean: rm -rf*.kr*.mod*.*.cmd*.o*.ko
