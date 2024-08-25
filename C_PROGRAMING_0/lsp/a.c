#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<error.h>

void *function1(void *ptr);
void *function2(void *ptr);

pthread_mutex_t mutex_lock;

int main()
{
	pthread_t thread1;
	pthread_t thread2;

	void *hi;
	void *hello;

	int a=pthread_mutex_init(&mutex_lock,NULL);
	if(a<0)
		perror("mutex intialising is failed");
	int b=pthread_create(&thread1,NULL,&function1,"a");
	if(b<0)
		perror("thread1 creation is failed");
	int c=pthread_create(&thread2,NULL,&function2,"b");
	if(c<0)
		perror("thread2 creation is failed");
	pthread_join(thread1,&hi);
	pthread_join(thread2,&hello);
	printf("%s\n%s\n",(char *)hi,(char *)hello);
}

void *function1(void *ptr)
{
	for(int i=0;i<4;i++)
	{
		pthread_mutex_lock(&mutex_lock);
		printf("%s\t",(char *)ptr);
		pthread_mutex_unlock(&mutex_lock);
		sleep(3);
	}
	pthread_exit("thead1 succusfull");
}

void *function2(void *ptr)
{
	for(int i=0;i<4;i++)
	{
		pthread_mutex_lock(&mutex_lock);
			printf("%s\n",(char *)ptr);
		pthread_mutex_unlock(&mutex_lock);
		sleep(3);
	}
	pthread_exit("thread2 succusfull");
}
