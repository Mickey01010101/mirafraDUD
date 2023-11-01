#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{

char * buffer[5],i;

/*
strcpy(buffer[0],"abc");
strcpy(buffer[1],"abc");
strcpy(buffer[2],"abc");
strcpy(buffer[3],"abc");
strcpy(buffer[4],"abc");
*/
for(i=0;i<5;i++)
{
scanf("%s",buffer[i]);
}

int fd=open("abc_pipe",O_WRONLY);

if(fd<0)
printf("open fails");

write(fd,buffer,5);
}
