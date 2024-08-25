#include<stdio.h>
void function(int arr[],int n);
int i=0,j=0,k=0;
int main()
{
	int arr[]={1,2,-1,2,3,-4,-1,-2};
	int n=sizeof(arr)/sizeof(arr[0]);
	function(arr,n);
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
					if(k<j)
					{
						printf(",");

					}
				}
				printf("}\n");
			}
		}
	}
}
