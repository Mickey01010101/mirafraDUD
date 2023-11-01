#include<stdlib.h>
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>
char *p;
int main()
{
int id=shmget(2,20,0666|IPC_CREAT);
if(id<0)
{
printf("shmget failed");
}
p=shmat(id,0,0);
printf("enter the string:");
scanf("%s",p);
}
