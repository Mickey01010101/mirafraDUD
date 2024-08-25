#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *function(void *ptr);
int main()
{
	void *hi;
	pthread_t thread1;

	int a=pthread_create(&thread1,NULL,&function,"hello");
	if(a<0)
		printf("thread creation failed");

	int b=pthread_join(thread1,&hi);
	char *x=(char *)hi;
	if(b<0)
		printf("thread join failes");
	printf("%s\n",x);

}

void * function(void *ptr)
{
	printf("%s\n",(char *)ptr);
	char *c="Good Afternoon";
	pthread_exit(c);
}
