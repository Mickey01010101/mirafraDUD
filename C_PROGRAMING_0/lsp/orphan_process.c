#include<stdio.h>
#include<unistd.h>
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
		sleep(10);
        }
        else
        {
                printf("parent process pid=%d\n",getppid());
		exit(0); //here parent terminates befor child ,,so child process adapting the init process
        }
}
