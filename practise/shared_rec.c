#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>

char *p;
int main()
{
int id=shmget(2,20,0666|IPC_CREAT);
if(id<0)
perror("fails");
p=shmat(id,0,0);
printf("%s",p);
}
