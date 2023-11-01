#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>

char *p;
char str[strlen(p)];
int i;
int main()
{
	int id=shmget(2,20,0666|IPC_CREAT);
	if(id<0)
		perror("faild");
	p=shmat(id,0,0);
	printf("%s",p);
	for(i=0;i<strlen(p);i++)
	{
		printf("%c\n",(p[i]+10));
		str[i]=p[i]+10;
	}
}



