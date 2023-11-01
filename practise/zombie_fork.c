#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
	pid_t pid;
	char *message;
	int n;

	pid=fork();
	switch(pid)
	{
		case -1: perror("fork is failed:");
			 exit(1);
		case 0 : message="this is child\n";
			 printf("child pid is=%d\t child ppid is=%d\n",getpid(),getppid());
			 n=10;
			 break;
		default: message="this is parent:\n";
			 printf("parent pid is=%d\t parent ppid is=%d\n",getpid(),getppid());
			 n=30;
			 //	break;
			 while(1)
				 break;
	}
	for( ;n>0;n--)
		puts(message);
	sleep(1);
} 


