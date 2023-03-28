//2.insertion sort							28-03-2023
#include<stdio.h>
int main()
{
	int arr[5],i,j,temp=0,n=0;
	printf("enter the 5 array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		n++;
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
printf("\n");
}
