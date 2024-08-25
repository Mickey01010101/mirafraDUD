#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,1,2,3,1,2};
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
	printf("after removing duplicate elements\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
			printf("%d\t",arr[i]);

	}
	printf("\n");
	printf("duplicate elements find\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1]&&arr[i]!=arr[i+2])
			printf("%d\t",arr[i]);
	}
	printf("\n");
}
