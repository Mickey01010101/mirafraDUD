//Add 1 to the given no. :  x = -(~x);				28-03-2023
#include<stdio.h>
void add1(int n)
{
	n=n|0x01;
	printf("after adding 1 is %d\n",n);
}
int main()
{
	int n;
	printf("enter a num\n");
	scanf("%d",&n);
	add1(n);
}
