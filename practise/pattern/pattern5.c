#include<stdio.h>
int main()
{
	int i,n,j,count=1;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,count++)
		{
			printf("%d ",count);
		}
		printf("\n");
	}
}
