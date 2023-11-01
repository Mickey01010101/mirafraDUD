#include<stdio.h>
int main()
{
	int arr[5],i,j,k,sum=0;
	printf("enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the sum value:\n");
	scanf("%d",&sum);
	for(i=0;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
			for(k=2;k<5;k++)
			{
			if(arr[i]+arr[j]+arr[k]==sum)
			{
				printf("%d\t %d\t %d\n",arr[i],arr[j],arr[k]);
			}
			}
		}
	}
}
