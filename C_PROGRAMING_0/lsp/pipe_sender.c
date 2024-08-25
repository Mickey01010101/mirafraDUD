#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	char buffer[5]="hello";
	int fd=open("abc_pipe",O_WRONLY);
	if(fd<0)
		printf("open fails");
	write(fd,buffer,5);
}
