#include<stdio.h>
#define P(a,n) for(i=0;i<n;i++) {\
	sum=sum+a[i];}\

int main()
{
	int n,i,sum=0;
	printf("enter the array size:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	P(a,n);
	printf("sum is %d\n",sum);
}
