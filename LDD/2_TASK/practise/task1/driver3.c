#include<linux/module.h>
//#include<linux/init.h>
#include<linux/fs.h>
#include<linux/types.h>
#include<linux/kernel.h>

dev_t dev=MKDEV=(299,0);

static int __init hello_init(void)
{
register_chrdev_region(dev,1,"hi");
printk(KERN_INFO"major=%d minor=%d",MAJOR(dev),MINOR(dev));
printk(KERN_INFO"module inserted succussfully");
return 0;
}

static void __exit hello_exit(void)
{
unregister_chrdev_region(dev,1);
printfk(KERN_INFO"module remove succussfully");
}


module_init(hello_init);
module_exit(hello_exit);
