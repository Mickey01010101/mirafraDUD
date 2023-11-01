#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdlib.h>

int main()
{
int res=mkfifo("abc_pipe",0777);
if(res==0)
printf("fifo created:");
exit(EXIT_SUCCESS);
}
