#include<stdio.h>
void function(int arr[],int n);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	function(arr,n);

}

void function(int arr[],int n)
{
	int i=0,j=0,target=0;
	int count=1;
	printf("enter the target\n");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j])==target)
			{
				printf("(%d + %d) = %d\n",arr[i],arr[j],target);
				count=0;
			}
		}
	}
	if(count==0)
		printf("pair found\n");
	else
		printf("pair not found\n");
}
