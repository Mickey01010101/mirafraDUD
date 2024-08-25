#include<stdio.h>
int main()
{
	int arr[]={1,2,3,1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0,j=0,temp=0;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;

		}
		for(i=0;i<n;i++)
		{
			if(arr[i]!=arr[i+1])
			printf("%d\t",arr[i]);
		}
	}
}
