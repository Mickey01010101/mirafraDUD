#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	int mid=mkfifo("abc_pipe",0777);
	if(mid==0)
		printf("pipe created succusfully\n");
	exit(EXIT_SUCCESS);
}


