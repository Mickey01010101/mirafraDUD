#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>


int main()
{
pid_t pid;

pid=fork();
if(pid==-1)
perror("failed");
if(pid==0)
printf("child pid=%d\t child ppid=%d\n",getpid(),getppid());
else
printf("parent pid=%d\t parent ppid=%d\n",getpid(),getppid());
}
