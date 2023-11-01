#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/ipc.h>

char *p;
int main()
{
	int id=shmget(2,20,0666|IPC_CREAT);
	if(id<0)
		printf("failed");
	p=shmat(id,0,0);
	printf("enter the string:");
	scanf("%s",p);
}
