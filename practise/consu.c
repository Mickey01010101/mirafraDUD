#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
char buffer[5];
int fd=open("abc_pipe2",O_RDWR);
if(fd<0)
perror("failed creation ");
int ret_read=read(fd,buffer,5);
write(1,buffer,ret_read);
}
