#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{
int res=mkfifo("abc_pipe",0777);
if(res==0)
printf("pipe created succusfully");
exit(EXIT_SUCCESS);
}
