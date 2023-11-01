/*Given an unsorted integer array, find a pair with the given sum in it.

For example,

Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
 
 
Input:
 
nums = [5, 2, 6, 8, 1, 9]
target = 12
 
Output: Pair not found

*/





#include<stdio.h>
void function(int arr[],int target);
int n=10,i,j,count=0;
int main()
{
	int arr[10]={1,2,3,4,5,0,1,2,4,7};
	int target;
	printf("enter the target:\n");
	scanf("%d",&target);
	function(arr,target);
}



void function(int arr[],int target)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("%d\t%d\n",arr[i],arr[j]);
				count++;
			}
		}
	}
	if(count==0)
	
		printf("not pairs found\n");
		else
			printf("pairs found\n");
	
}
