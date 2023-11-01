#include<stdio.h>
int main()
{
	int i=0,n,m,sum=0;
	printf("enter two numbers\n");
	scanf("%d%d",&n,&m);
	while(i<n)
	{
		sum=sum+m;
i++;
	}
	printf("%d",sum);
}
