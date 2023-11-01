#include<stdio.h>
int i,j,n,z,target,count=0;
void fun(int arr[]);
int main()
{
	int arr[100];
	printf("how many number of elements you want:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	fun(arr);
}

void fun(int arr[])
{
	printf("enter the target:\n");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("%d\t%d\n",arr[i],arr[j]);
				count++;
			}
		}
	}
	if(count==0)
		printf("not founding:\n");
	else
		printf("founded\n");
}
