#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	getchar();
	pid=fork();
	if(pid==-1)
		perror("fork is failed:");
	if(pid==0)
	{
		sleep(1);
		printf("child process pid is %d\n",getpid());
		printf("child process parent pid is %d\n",getppid());
	}
	else
	{
		sleep(2);
		printf("parent process pid is %d\n",getpid());
		printf("parent process parent pid is %d\n",getppid());
	}
}

