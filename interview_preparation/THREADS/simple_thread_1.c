#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int i;
void *function(void *args);
int main()
{

	pthread_t z;
	

	if(pthread_create(&z,NULL,function,NULL)!=0)
	{
		perror("thread creates failed");
		return 1;
	}


	if(pthread_join(z,NULL)!=0)
	{
		perror("thread join fails:\n");
		return 1;
	}

}


void *function(void *args)
{
	printf("entered thread");
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
	}
	pthread_exit(NULL);
}

