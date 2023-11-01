/*
wap to enter a string from the app. The driver need to reverse the string and send back to the app?
 */

#include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<sys/types.h>
 #include<string.h>
 #include<fcntl.h>
 #include<sys/stat.h>


/*
 int main()
 {       char write_buf[40];
         char read_buf[40];
	 char buf[40];
	char *p[]={"mirafra","technologies","hyderabad"};
//	 int n,ret,n1;
//	 char buff[100];
//	 int fd3,fd2,fd;
	 fd=open("/dev/driver1",O_RDWR);

	 if(fd==-1)
	 {
		 printf("open fails\n");
		 exit(0);
	 }	 
	 printf("enter the string to write into the driver\n");
	 scanf(" %[^\n]s",write_buf);
	 printf("data is read successfully\n\n");
	 write(fd,write_buf,sizeof(write_buf));
	 printf("done\n");	
	 lseek(fd,8,SEEK_SET);
	 n=read(fd,read_buf,20);

	// write(1,read_buf,40);
	printf("%s\n",read_buf);
	close(fd);
	 return 0;
 }

*/

int main()
{
int i;
char write_1[100]=" MIRAFRA ";
char read_1[100];
int fd=open("/dev/drv",O_RDWR);
if(fd<0)
{
printf("open fails\n");
exit(0);
}
write(fd,write_1,strlen(write_1));
read(fd,read_1,100);
printf("%s",read_1);
//read(fd,read_1,100);
//printf("%s",read_1);
close(fd);
exit(0);
}



