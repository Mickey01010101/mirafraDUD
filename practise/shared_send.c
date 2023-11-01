#include<stdio.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/shm.h>

char *p;

int main()
{
int id;
id=shmget(22,2,0666|IPC_CREAT);
if(id<0)
{
perror("shared memory failed");
exit(0);
}
p=shmat(id,0,0);
printf("enter the string:");
scanf("%s",p);
}
