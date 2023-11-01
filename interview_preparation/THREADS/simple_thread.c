#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int i;
void *function(void *args);
int main()
{
	pthread_t z;
//	int i;
	if(pthread_create(&z,NULL,function,NULL)!=0)
	{
		printf("thread create\n");
		return 1;
	}

	if(pthread_join(z,NULL)!=0)
	{
		perror("thread join\n");
		return 1;
	}

	for(i=0;i<10;i++)
	{
		scanf("%d",&i);
	}
pthread_exit(NULL);
}
	void *function(void *args)
	{
		printf("thread entered\n");
		for(i=0;i<10;i++)
		{
			printf("%d",i);
		}
		return NULL;
	}
