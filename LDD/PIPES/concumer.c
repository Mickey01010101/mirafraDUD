#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
char buffer[5];
int fd=open("abc_pipe",O_RDWR);
if(fd<0)
perror("open fail\n");
int read_ret=read(fd,buffer,5);
write(1,buffer,read_ret);
}

