/*
Given a limited range array of size n containing elements between 1 and n-1 with one element repeating, find the duplicate number in it without using any extra space.

For example,

Input:  { 1, 2, 3, 4, 4 }
Output: The duplicate element is 4
 
 
Input:  { 1, 2, 3, 4, 2 }
Output: The duplicate element is 2

*/


#include<stdio.h>
void function(int arr[]);
int i,j,temp=0;
int n=10;
int main()
{
	int arr[10]={1,2,3,4,5,2,3,1,2,6};
	function(arr);
}

void function(int arr[])
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
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

