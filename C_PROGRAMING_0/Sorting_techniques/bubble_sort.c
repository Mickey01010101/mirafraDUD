#include<stdio.h>
int main()
{
	int arr[]={1,5,2,5,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0,j=0,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
