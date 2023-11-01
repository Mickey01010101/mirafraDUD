#include<stdio.h>
void function(int arr[]);
int i,j,n,target;
int main()
{
	int arr[100];
	printf("enter the array elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[n]);
	}
	printf("enter the target\n");
	scanf("%d",&target);
	function(arr);
}

void function(int arr[])
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("%d\t%d\n",arr[i],arr[j]);
				printf("target found:");
			}
		}

	}
}
