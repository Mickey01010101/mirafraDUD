#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
        char buffer[5];
        int fd=open("abc_pipe",O_RDWR);
        if(fd<0)
                printf("open fails");
	int read_ret=read(fd,buffer,5);
	write(1,buffer,read_ret);
}
