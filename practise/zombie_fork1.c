#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t pid;
	char *message;
	int n;

	pid=fork();
	switch(pid)
	{
		case -1 : perror("fork is not created:");
			  exit(1);
		case 0 : message="this is child process:\n";
			 printf("child processs is is =%d\t child ppid is =%d\n",getpid(),getppid());
			 n=5;
			 break;
		default :message="this is parent process:";
			 printf("parent pid is =%d\t parent ppid is =%d\n",getpid(),getppid());
			 n=10;
			 while(1)
			 break;
	}
	for( ;n>0;n--)
		puts(message);
	sleep(1);

}
