#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int res=mkfifo("abc_pipe",0777);
if(res==0)
	printf("FIFO IS CREATED\n");
exit(EXIT_SUCCESS);
}
