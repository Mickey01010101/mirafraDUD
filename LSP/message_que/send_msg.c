#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<stdlib.h>


struct mes
{
	int id;
	char name[20];
};

int main()
{
	struct mes send_msg;
	int n;
	int mid=msgget(10,IPC_CREAT|0666);
	if(mid<0)
		perror("failed to create");
	send_msg.id=1;
	strcpy(send_msg.name,"hello");

	if(n=(msgsnd(mid,&send_msg,sizeof(send_msg),0))==0)
	{
		printf("msgsnd");
		msgctl(mid,IPC_RMID,0);
	}
else
perror("failed");
}


