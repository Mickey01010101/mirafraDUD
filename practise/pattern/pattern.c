#include<stdio.h>
int main()
{
	int n,space,star,i;
	printf("enter the rows:");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		for(space=0;space<n-i;space++)
		{
			printf(" ");
		}
		for(star=0;star<2*i-1;star++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=n;i>=0;i--)
	{
		for(space=0;space<n-i;space++)
		{
			printf(" ");
		}
		for(star=0;star<2*i-1;star++)
		{
			printf("*");
		}
		printf("\n");
	}
}
