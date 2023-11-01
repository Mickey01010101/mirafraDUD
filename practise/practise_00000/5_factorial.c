#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		i=i*n;
		printf("%d*",n);
		n--;
	}
	printf("=%d",i);
}
