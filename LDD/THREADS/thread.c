#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int i,j;
void *function(void *args);
int main()
{
pthread_t hi_sir;
pthread_create(&hi_sir,NULL,function,NULL);
pthread_join(hi_sir,NULL);

for(i=0;i<10;i++)
{
printf("%d\t",i);
}
}

void *function(void *args)
{
printf("thread entered\n");
for(j=10;j>0;j--)
{
printf("%d\t",j);
}
}
