#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
char *message;
int n;
pid_t pid;
pid=fork();
switch(pid)
{
case -1:perror("fork creation failed\n");
        exit(0);
case 1:message="this is child process";
       printf("child pid=%d\t child ppid=%d\n",getpid(),getppid());
       n=3;
       break;
default:message="this is parent process";
	printf("parent pid=%d\t parent ppid=%d\n",getpid(),getppid());
        n=5;
	while(1)
        break;
}
for(;n>0;n--)
puts(message);
sleep(1);
}
