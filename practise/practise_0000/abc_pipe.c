#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
int ret=mkfifo("abc_pipe",0777);
if(ret==0)
printf("PIPE CREATED SUCCUSFULLY");
exit(EXIT_SUCCESS);
}
