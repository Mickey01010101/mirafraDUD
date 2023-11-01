#include<stdio.h>
int main()
{
	int arr[5];
	int i,j,temp,min;
	printf("enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the min value:");
	scanf("%d",&min);
	for(i=0;i<5-1;i++)
		for(j=i+1;i<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	printf("after sorting the elements:\n");
	for(i=0;i<min;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}
