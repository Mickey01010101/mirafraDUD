#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<string.h>

struct mes
{
int id;
char data[20];
};

int main()
{
struct mes send_message;
int mid=msgget(10,0666|IPC_CREAT),n;
if(mid<0)
perror("failed");
send_message.id=1;
strcpy(send_message.data,"hello");
if(n=(msgsnd(mid,&send_message,20,0)>0))
{
perror("msgsnd");
exit(0);
}
}
