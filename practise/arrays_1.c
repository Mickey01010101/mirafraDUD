#include<stdio.h>
int main()
{
	int n,i,j,temp,min;
	int arr[5];
	printf("enter the array elements:");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("enter the min values:\n");
	scanf("%d",&min);
	for(i=0;i<min;i++)
	{
		for(j=i+1;j<min;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("after sorting the elements:\n");
	{
		for(i=0;i<min;i++)
		if(arr[i]!=arr[i+1]);
			printf("%d\t",arr[i]);

}

}

