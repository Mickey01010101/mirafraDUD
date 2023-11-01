#include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<sys/types.h>
 #include<string.h>
 #include<fcntl.h>
 #include<sys/stat.h>
 int main()
 {       char write_buf[100]="Mirafra Hyderabad";
         char read_buf[100];
	 char buf[40]="Technologies";
	 int n,ret,n1;
	 char buff[100];
	 int fd3,fd2,fd;
	 fd=open("/dev/insert",O_RDWR); //open the my_dev4 driver

	 if(fd==-1)
	 {
		 printf("open fails\n");
		 exit(0);
	 }	 
	 write(fd,buf,strlen(buf));  //writing data userspace to kernel
	write(fd,write_buf,sizeof(write_buf));	
//	 lseek(fd,8,SEEK_SET); // to set a cursor position
	 n=read(fd,read_buf,200);

	// write(1,read_buf,40);
	printf("%s\n",read_buf);
	close(fd);
	 return 0;
 }
