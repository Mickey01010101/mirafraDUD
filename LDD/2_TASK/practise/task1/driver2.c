#include<linux/module.h>
#include<linux/fs.h>
//#include<linux/init.h>
#include<linux/types.h>
#include<linux/kernel.h>


dev_t dev=MKDEV(255,0);



//init function
static int __init hello_init(void)
{
register_chrdev_region(dev,1,"yssup");
printk(KERN_INFO"major=%d minor=%d",MAJOR(dev),MINOR(dev));
printk(KERN_INFO"inserted succusfully");
return 0;
}

//exit function
static void __exit hello_exit(void)
{
unregister_chrdev_region(dev,1);
printk(KERN_INFO"kernel module remove succufully");
}


module_init(hello_init);
module_exit(hello_exit);

/*MODULE_LICENSE("GPL");
MODULE_AUTHOR("GIRISH");
MODULE_DESCRIPTION("STATISTICALLY ALLOCATED MAJOR AND MINOR NUMBER");
MODULE_VERSION("5.4.0");*/
