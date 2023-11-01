//array duplicate elements

#include<stdio.h>
int main()
{
	int arr[10];
	int i,j,n=5,temp;

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			printf("%d\t",arr[i]);
		}
	}
}
