#include<stdio.h>
//#include<stdlib.h>
#include<unistd.h>
//#include<sys/types.h>
//#include<sys/stat.h>
void childprocess();
void parentprocess();
int main()
{
	int pid;
	pid=fork();
	if(pid==0)
	{
		childprocess();
		sleep(500);
	}
	else
		parentprocess();
}

void childprocess()
{
	printf("child process:\n");
	printf("child process id is %d:\n",getpid());
	printf("child parent process id is %d:\n",getppid());
}

void parentprocess()
{
	printf("parent process:\n");
	printf("parent process id is :%d\n",getpid());
	printf("parent parent id(SHELL ID) is :%d\n",getppid());
}

