#include<stdio.h>
int main()
{
	int a=5,n=3,i=1,j,incr,sum;
	sum=incr=a;
	while(i<n)
	{
		j=1;
		while(j<a)
		{
			sum=sum+incr;
			j++;
		}
	incr=sum;
		i++;
	}
	printf("power of %d and %d=%d",a,n,sum);
}
