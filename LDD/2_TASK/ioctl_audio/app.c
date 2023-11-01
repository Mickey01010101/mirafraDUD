/*audio_my_play-- write 100 char in buffert
audio_my_read-- read 20 chars
audio_my_nextsong--change buffer size to 1000 and return 5 char
audio_my_prev--fill buffer size with * char and read to user space*/

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include"header.h"
#include<sys/ioctl.h>
#include<linux/ioctl.h>
int main()
{
char buffer[50];
char buff[10];
char buff2[20];
int fd=open("/dev/AYYAPPA",O_RDWR);
if(fd==-1){
printf("open failed\n");
exit(0);
}

ioctl(fd,audio_my_play,'$');
//reading 20 chars
ioctl(fd,audio_my_record,buffer);
printf("audio my record 20 char read\n%s\n",buffer);
//change size
ioctl(fd,audio_my_nextsong,buff);
printf("case 3: return 5 char is ::%s\n",buff);
//return all charts
ioctl(fd,audio_my_prevsong,buff2);
printf("case 4: %s\n",buff2);


close(fd);
}
