#include<linux/module.h>
#include<linux/init.h>
#include<linux/fs.h>
#include<linux/types.h>

dev_t dev=MKDEV(250,0);

module_init(hello_init);
module exit(exit_hello);

static int __init hello_init(void)
{
register_chrdev_region(dev,1,"#uck #u");
printk(KERN_INFO"major=%d minor=%d",MAJOR(dev),MINOR(dev));
printk(KERN_INFO"kernel module inserted succusfully");
return 0;
}

static void __exit hello_exit(void)
{
unregister_chrdev_region(dev,1);
printk(KERN_INFO"kernel module remove succusfully");
}


