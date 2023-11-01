#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
void *function(void *arg);
void *function1(void *arg);
int i,j;

int main()
{
	pthread_t z;
	pthread_t y;
	pthread_create(&z,NULL,function,NULL);
	pthread_join(z,NULL);
        

        pthread_create(&y,NULL,function1,NULL);
	pthread_join(y,NULL);
	for(i=0;i<10;i++)
	{
		printf("%d\t",i);
		sleep(1);
	}
}

void *function(void *arg)
{
printf("entering the function 1\n");
for(j=0;j<10;j++)
{
printf("%d\t",j);
sleep(1);
}
}

void *function1(void *arg)
{
printf("entering the function 2\n");
for(j=0;j<5;j++)
{
printf("%d\t",j);
sleep(1);
}
}
