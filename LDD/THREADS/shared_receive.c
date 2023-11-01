#include<stdio.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>
char *p;

int main()
{
int ret=shmget(2,20,0666|IPC_CREAT);
if(ret<0)
{
perror("failed to open");
}

p=shmat(ret,0,0);
printf("%s",p);
}
