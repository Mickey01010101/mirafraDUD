obj-m := i2c_driver.o
obj-m += i2c_driver_dependency.o
all:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules
clean:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules clean
