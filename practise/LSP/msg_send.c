#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<string.h>

struct msg
{
	int id;
	char data[20];
};

int main()
{
struct msg send_message;
int mid=msgget(10,0666|IPC_CREAT);
if(mid<0)
perror("failed");
send_message.id=1;
strcpy(send_message.data,"hello");
if(n=(msgsnd(mid,&send_message,20,0,0)>0))
printf("error");
}
