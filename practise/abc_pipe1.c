#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int res=mkfifo("abc_pipe1",0777);
if(res==0)
printf("pipe creates");
exit(EXIT_SUCCESS);
}
