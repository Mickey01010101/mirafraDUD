#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=5;
	int *ptr=(int *)malloc(n*sizeof(int));
	printf("%lu\n",n*(sizeof(ptr)));
}
