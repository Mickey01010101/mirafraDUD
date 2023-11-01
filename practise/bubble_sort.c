#include<stdio.h>
int main()
{
	int arr[10],i,j,n,temp=0;
	printf("how many elements do u want:\n");
	scanf("%d",&n);
	printf("enter the array elemnts:\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
	printf("\n");
	
}
