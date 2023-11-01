#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int ret;
	char ch;
	write(1,"enter a charecter:",20);
	ret=read(0,&ch,1);
	if(ret==-1)
	{
		perror("sry unable to read:");
		exit(0);
	}
	else if(ret==0)
		printf("end of the file:");
	else
		write(1,&ch,ret);
	return 0;
}

