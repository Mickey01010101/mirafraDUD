#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
int res=mkfifo("abc_pipe2",0777);
if(res==0)
	printf("FIFO CREATED SUCCUSFULLY");
exit(EXIT_SUCCESS);
}
