#include<stdio.h>
int fun(int arr[],int p);
#define S 10
int main()
{
	int i,arr[S],s;
	for(i=0;i<S;i++)
	{
		printf("enter the array:");
		scanf("%d",&arr[i]);
	}
	s=fun(arr,S);
	printf("biggest position is %d",s);
}


int fun(int arr[],int p)
{
	int i,big,x;
	for(i=0;i<p;i++)
	{
		if(i==0)
		{
			big=arr[i];
			x=i;
		}
		if(arr[i]>big)
		{
			big=arr[i];
			x=i;
		}
	}
	printf("biggest number is %d",big);
	return x;
}
