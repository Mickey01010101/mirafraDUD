#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid=fork();
	
	if(pid<0)
		perror("fork failed");
	else if(pid==0)
	{
		printf("child process pid=%d\n",getpid());
	}
	else
	{
		printf("parent process pid=%d\n",getppid());
	}
}

