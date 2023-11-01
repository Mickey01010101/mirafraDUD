/*
Given an integer array, check if it contains a subarray having zero-sum.

For example,

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
 
Output: Subarray with zero-sum exists
 
The subarrays with a sum of 0 are:
 
{ 3, 4, -7 }
{ 4, -7, 3 }
{ -7, 3, 1, 3 }
{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }


*/


#include<stdio.h>
int i,j,k,count=0;
void function(int arr[],int n);
int main()
{
	int arr[10]={3,4,-7,3,1,3,1,-4,-2,-2};

	int n=sizeof(arr) / sizeof(arr[0]);

	function(arr,n);
return 0;
}

void function(int arr[],int n)
{
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+arr[j];
			if(sum==0)
			{
			printf("{");
			for(k=i;k<=j;k++)
			{
				printf("%d",arr[k]);
				count++;
				if(k<j)
					printf(" , ");
			}
			printf("}\n");
		}
	}
}
}
