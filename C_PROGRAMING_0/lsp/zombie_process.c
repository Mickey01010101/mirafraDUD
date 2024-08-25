#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
        pid_t pid=fork();

        if(pid<0)
                perror("fork failed");
        else if(pid==0)
        {
                printf("child process pid=%d\n",getpid());
		exit(0); //child exits
        }
        else
        {
                printf("parent process pid=%d\n",getppid());
		sleep(10);
        }
}
