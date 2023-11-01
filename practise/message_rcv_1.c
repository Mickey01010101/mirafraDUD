#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
struct msg
{
	int id;
	char name[30];
};

int main()
{
	int n;
	struct msg message;
	int mid=msgget(2,0666);
	if(mid<0){
		perror("msgget erro");
}
	msgrcv(mid,&message,sizeof(&message),0,0);
	printf("%s\n",message.name);
	printf("%d\n",message.id);
}

