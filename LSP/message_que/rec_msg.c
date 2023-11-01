#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<sys/msg.h>

struct mes
{
	int id;
	char name[20];
};

int main()
{
	struct mes recive_msg;
	int n;
	int mid=msgget(10,IPC_CREAT|0666);
	if(mid<0)
		perror("error");
	if(n= (msgrcv(mid,&recive_msg,sizeof(recive_msg),0,0)) >0)
	{
		printf("%d\n",recive_msg.id);
		recive_msg.name[sizeof(recive_msg.name)-1]='\0';
		printf("%s\n",recive_msg.name);
		msgctl(mid,IPC_RMID,0);

	}
	else
		perror("failed\n");
}



