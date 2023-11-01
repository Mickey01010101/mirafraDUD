#include<linux/module.h>
#include<linux/fs.h>
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
int i;
char str[1500];
char a[20]="sree embedded";
char b[20]="technologies";

int fd=open("/dev/drv",O_RDWR);
if(fd<0)
{
printf("open fails");
}

for(i=0;i<1024;i++)
{
str[i]='*';
}
str[i]=0;

write(fd,str,strlen(str));

lseek(fd,10,SEEK_SET);
write(fd,a,strlen(a));

lseek(fd,100,SEEK_SET);
write(fd,b,strlen(b));

read(fd,str,strlen(str));

printf("%s",str);

close(fd);

}



