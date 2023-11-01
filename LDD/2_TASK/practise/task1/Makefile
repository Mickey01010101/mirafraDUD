obj-m += driver2.o

HELLO= /lib/modules/$(shell uname -r)/build

all:
	make -C $(HELLO) M=$(shell pwd) modules
	
clean:
	make -C $(HELLO) M=$(shell pwd) clean
