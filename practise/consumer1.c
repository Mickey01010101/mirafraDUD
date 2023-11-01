#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
char buffer[5];
int fd=open("abc_pipe1",O_RDWR);
int read_ret=read(fd,buffer,5);
write(1,buffer,read_ret);
}

