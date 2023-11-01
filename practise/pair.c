#include<stdio.h>
int i,j,target,count=0,n;
void function(int arr[]);
int main()
{

	int arr[100];

	printf("how many elements u want:");
	scanf("%d",&n);
	printf("enter the target:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
		function(arr);
}


void function(int arr[])
{
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("%d\t%d\n",arr[i],arr[j]);
				count++;
			}
		}
	}
	if(count>0)
		printf("target is found:\n");
	else
		printf("not found:\n");
}
