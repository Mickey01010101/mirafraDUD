#include<stdio.h>
int main()
{
	int i=3,n,a=1,b=1,c;
	c=a+b;
	printf("enter a number:");
	scanf("%d",&n);
	printf("fibonacci series is:%d %d ",a,b);
	while(i<=n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}	
	printf("\n");
}

