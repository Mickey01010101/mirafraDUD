#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>


int main()
{
int n;
char *message;
pid_t pid;
pid=fork();
switch(pid)
{
case -1: printf("failed");
         exit(0);
case 0 : message="child";
         printf("pid=%d ppid=%d\n",getpid(),getppid());
         n=5;
         break;
default:message="parent";
        printf("pid=%d ppid=%d\n",getpid(),getppid());
        n=3;
	while(1)
        break;
}
for( ;n>0;n--)
puts(message);
sleep(1);
}
