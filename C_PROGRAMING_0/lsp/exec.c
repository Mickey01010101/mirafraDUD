#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t pid=fork();
		if(pid==0)
		{
			printf("child=%d\n",getpid());
			execlp("/bin/ls","ls",NULL);	//replacing the child process from the ls command

		}
		else if(pid>0)
		{
			printf("parent=%d\n",getppid());
		}
		else
			perror("fork faild");
}
