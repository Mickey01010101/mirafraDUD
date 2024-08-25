#include<stdio.h>
int main()
{
	int i=0,max=0,second_max=0,n=10;
	//int arr[]={1,2,3,3,4,2,3,1,4};
	
	int arr[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//	int n=sizeof(arr)/sizeof(arr[0]);


for(i=0;i<n;i++)
{
	if(arr[i]>max)
	{

		second_max=max;
		max=arr[i];
	}
	else if(arr[i]>second_max&&arr[i]!=max)
	{
		second_max=arr[i];
	}
}

printf("%d\n",second_max);

}

