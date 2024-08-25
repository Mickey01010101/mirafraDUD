#include<stdio.h>
int main()
{
	int arr[]={0,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=0,second_max=0,i;
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
	printf("big_number is =%d\n",max);
	printf("second_big=%d\n",second_max);
}
