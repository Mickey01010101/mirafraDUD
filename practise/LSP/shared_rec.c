#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
char *p;
int main()
{
int fd=shmget(2,20,0666|IPC_CREAT);
if(fd<0)
printf("shmget failed");

p=shmat(fd,0,0);
printf("%s",p);
}
