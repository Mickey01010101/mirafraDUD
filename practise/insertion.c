/*	INSERTION SORT

	Take one element unsorted list and inserted to the sorted list

 */



#include<stdio.h>
int main()
{
	int i,j,temp;

	int arr[100];
	printf("enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<5;i++)
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
	printf("after sorting the elements:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
}



