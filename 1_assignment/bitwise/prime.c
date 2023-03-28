//prime number or not using of bitwise operators		28-03-2023

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if((n&(n-1))==(n-1))
		printf("prime:\n");
	else 
		printf("not prime:\n");
}
