#include<stdio.h>
int main()
{
	int n=5,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
				printf("1");
			if((i+j)%2!=0)
				printf("0");
		}
		printf("\n");
	}
}


