#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
char buffer[5];
buffer[0]='a';
buffer[1]='b';
buffer[2]='c';
buffer[3]='d';
buffer[4]='e';
int fd=open("abc_pipe2",O_WRONLY);
if(fd<0)
	printf("pipe failed");
write(fd,buffer,5);
}
