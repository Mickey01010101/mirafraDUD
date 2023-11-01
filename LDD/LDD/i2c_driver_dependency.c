#include<linux/module.h>
#include<linux/fs.h>
#include<linux/init.h>
#include<linux/cdev.h>
#include<linux/slab.h>

/*void fun()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		printk("%d\t",i);
	}
}
*/
int fun(int, int);
static int __init driver_start(void)
{
	printk("enters into the dependency program i= %d....\n",fun(2,4));
	return 0;

}

static void __exit driver_exit(void)
{
	printk("end module...\n");

}

module_init(driver_start);
module_exit(driver_exit);
