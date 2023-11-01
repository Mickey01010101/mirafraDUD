
/*
audio_my_play-- write 100 char in buffert
audio_my_read-- read 20 chars
audio_my_nextsong--change buffer size to 1000 and return 5 char
audio_my_prev--fill buffer size with * char and read to user space*/


#include"header.h"
#include<linux/kernel.h>
#include<linux/device.h>
#include<linux/init.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/module.h>
#include<linux/uaccess.h>
#include<linux/slab.h>

//kernel size
#define size 100
char *s;
static void myfun(void)
{
s=(char *)kmalloc(size,GFP_KERNEL);//global var
}
static void myrealloc(void)
{
s=krealloc(s,10*sizeof(char),GFP_KERNEL);//global var
}
static int my_open(struct inode *, struct file *);
static ssize_t my_read(struct file *, char __user *, size_t, loff_t *);
static ssize_t my_write(struct file *, const char __user *, size_t, loff_t *);
static int my_close(struct inode *, struct file *);
loff_t my_llseek(struct file *, loff_t, int);
static long my_ioctl(struct file *file,unsigned int cmd,unsigned long arg);

/*struct cdev var*/
struct cdev cdev_var;

//struct class ptr
static struct class *k_class;

/*file operation structure*/
static struct file_operations fops =
{
.owner=THIS_MODULE,
.open =my_open,
.read =my_read,
.write =my_write,
.llseek=my_llseek,
.unlocked_ioctl = my_ioctl,
.release =my_close,
};

/*my open*/
static int my_open(struct inode *inode , struct file *file)
{
printk("open function started..\n");
return 0;
}

char a[100];//var to store receve data
/*my read*/
static ssize_t my_read(struct file *flip, char __user *buffer, size_t length, loff_t *off)
{
printk("read function started...\n");
copy_to_user(buffer,a+*off,length);//kernel to user
printk("data send to usr file is %s\n",buffer);
return length;
}

/*my write*/
static ssize_t my_write(struct file *flip, const char __user *buffer, size_t length, loff_t *off)
{
printk("write function started...\n");
printk("receved data is %s\n",buffer);
copy_from_user(a,buffer,length);//user to kernel
return 0;
}

/*my llseek*/
loff_t my_llseek(struct file *file, loff_t off_set, int whence) {
loff_t new_offset = 0;

printk("llseek function started....\n");
printk("the coursor is at %lld position\n",off_set);
new_offset = off_set;
file->f_pos = new_offset;
return new_offset;
}

static int my_close(struct inode *inode, struct file *file)
{
printk("release function started...\n");
return 0;
}

/*ioctl function*/
static long my_ioctl(struct file *file,unsigned int cmd,unsigned long arg)
{

int i=0;
switch(cmd)
{
case audio_my_play://audio_my_play-- write 100 char in buffert
myfun();//kmalloc
printk("audio_my_play started...\n");
//int i=0;
for(i=0;i<size;i++)
{
s[i]=arg;
}
printk("case 1:- %s\n",s);
break;

case audio_my_record://audio_my_read-- read 20 chars
printk("audio_my_record started...\n");
printk("case 2:- %s\n",s);
copy_to_user((char*)arg,s,20);
printk("20 char send to user...\n");
break;

case audio_my_nextsong://audio_my_nextsong--change buffer size to 10 and write 5 char
printk("audio_my_nextsong started...\n");
myrealloc();//realloc
printk("after realloc changed to 10 write 5 char are %s\n",s);
printk("size of kernel buffer %ld\n",sizeof(s));
copy_to_user((char *)arg,s,5);
break;

case audio_my_prevsong://audio_my_prev--fill buffer size with * char and read to user space*
printk("audio_my_prevsong started...\n");
for(i=0;i<10;i++)
{
s[i]='*';
}
copy_to_user((char*)arg,s,10);
printk("the buffer filled with :- %s\n",s);
break;


}
return 0;
}


dev_t dev_no;
static int __init start_fun(void)
{

//step 1 creating major and minor number
alloc_chrdev_region(&dev_no,0,1,"AYYAPPA");

printk("alloc sucessfull Major = %d Minor = %d \n",MAJOR(dev_no), MINOR(dev_no));

//step 2
cdev_alloc();

//step 3 cdev initalize
cdev_init(&cdev_var,&fops);

// step 4 regestration with vfs
cdev_add(&cdev_var,dev_no,1);

//class create
k_class=class_create(THIS_MODULE,"my_class");

//device create
device_create(k_class,NULL,dev_no,NULL,"AYYAPPA");
return 0;
}

static void __exit end_fun(void)
{
kfree(s);
device_destroy(k_class,dev_no);
class_destroy(k_class);
cdev_del(&cdev_var);
unregister_chrdev_region(dev_no,1);
printk("sucessfully exiting\n");
}
module_init(start_fun);
module_exit(end_fun);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ABHI");
MODULE_DESCRIPTION("a char driver sample");
