#include<sys/wait.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int n;
	char *message;
	pid_t pid;
	pid=fork();
	/*if(pid==-1)
	  {
	  printf("error");
	  }
	  else if(pid==0)
	  printf("child pid=%d\t child ppid=%d\n",getpid(),getppid());
	  else
	  printf("parent pid=%d\t parent ppid=%d\n",getpid(),getppid());
	  }
	 */
switch(pid)
{
	case -1: perror("failed");
		 exit(1);
	case 0 :message="child";
		printf("%d%d",getpid(),getppid());
		n=5;
		break;
	default: message="parent";
		 printf("%d%d",getpid(),getppid());
		 n=4;
		 while(1)
			 break;
}
	for(;n>0;n--)
while(1)
	puts(message);
	sleep(1);
	}
