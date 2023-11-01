#include<linux/module.h>
#include<linux/fs.h>
#include<linux/init.h>
#include<linux/cdev.h>
#include<linux/slab.h>



void fun(int x, int y)
{
         printk("add is :%d",x+y);
}

EXPORT_SYMBOL(fun);

static int __init driver_start(void)
{
	printk("started module....\n");
	return 0;

}

static void __exit driver_exit(void)
{
	printk("ended module...\n");

}

module_init(driver_start);
module_exit(driver_exit);
