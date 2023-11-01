//practise malloc function 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("enter the how many values u need:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	for(i=0;i<n;i++)
	{
		printf("%p\n",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
}
