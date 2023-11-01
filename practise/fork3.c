#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
//	getchar();
	pid=fork();
	if(pid==-1)
		perror("fork creation failed");
	if(pid==1)
	{
		sleep(1);
		printf("child pid=%d\t child ppid=%d\n",getpid(),getppid());
	}
	else
	{
		sleep(2);
		printf("parent pid=%d\t parent ppid=%d\n",getpid(),getppid());
	}
}
