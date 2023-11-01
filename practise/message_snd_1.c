#include<stdio.h>
#include<sys/msg.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<sys/ipc.h>
#include<stdlib.h>
struct msg
{
	int id;
	char name[30];
};
int main()
{
	int n;
	struct msg message;
	int mid;
	mid=msgget(2,0666|IPC_CREAT);
	if(mid<0)
		perror("msgget error");
	message.id=1;
	strcpy(message.name,"Hi boys");
	msgsnd(mid,&message,sizeof(&message),0);
printf("the shared name is:%s",message.name);
}
