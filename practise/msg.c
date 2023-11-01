#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdlib.h>

int main()
{
int mid=msgget(10,IPC_CREAT);
if(mid<0)
perror("fail");
else
printf("succuss");
system("ipcs");
}


