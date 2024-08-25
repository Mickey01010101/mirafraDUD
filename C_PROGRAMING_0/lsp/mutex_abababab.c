#include<stdio.h>
#include<unistd.h>
#include<error.h>
#include<pthread.h>


pthread_mutex_t mutex_lock;

void *function1(void *ptr)
{
	for(int i=0;i<4;i++)
	{
		pthread_mutex_lock(&mutex_lock);
		printf("%s\t",(char *)ptr);
		pthread_mutex_unlock(&mutex_lock);
		sleep(2);
	}
	pthread_exit("succuss");
}

void *function2(void *ptr)
{
	for(int i=0;i<4;i++)
	{
		pthread_mutex_lock(&mutex_lock);
		printf("%s\n",(char *)ptr);
		pthread_mutex_unlock(&mutex_lock);
		sleep(2);
	}
	pthread_exit("success");
}




int main()
{
	pthread_t thread1;
	pthread_t thread2;

	int a=pthread_mutex_init(&mutex_lock,NULL);
	if(a<0)
		perror("mutex intialoion is failed");
	int b=pthread_create(&thread1,NULL,&function1,"a");
	if(b<0)
		perror("thread1 creation is failed");
	int c=pthread_create(&thread2,NULL,&function2,"b");

	void *hi,*hello;

	pthread_join(thread1,&hi);
	pthread_join(thread2,&hello);

	printf("%s\n%s\n",(char *)hi,(char *)hello);

}



