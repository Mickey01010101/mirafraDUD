#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{

int ret=mkfifo("abc_pipe",0777);
if(ret==0)
printf("FIFO created succusfully");
exit(EXIT_SUCCESS);
}
