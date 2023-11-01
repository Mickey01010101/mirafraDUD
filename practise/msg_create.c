#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/msg.h>
#include<sys/ipc.h>

int main()
{
int mid=msgget(10,IPC_CREAT);
if(mid<0)
perror("fail");
else
printf("succussfully created");

system("ipcs");
}
