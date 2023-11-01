#include<stdio.h>
int main()
{
	int space,i,j,n;
	    printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %c",1);
			printf("\n");
		}
	}
}
