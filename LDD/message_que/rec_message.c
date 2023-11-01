#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/msg.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/ipc.h>

struct mes
{
	int id;
	char data[20];
};

int main()
{
	struct mes rec_message;
	int mid=msgget(10,0666|IPC_CREAT),n;
	if(mid<0)
		printf("error");
	if(n=(msgrcv(mid,&rec_message,20,0,0)<0))
			perror("failed");
			printf("%d",rec_message.id);
			printf("%s",rec_message.data);
			}
