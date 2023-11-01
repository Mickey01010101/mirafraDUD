#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%2==0)
		printf("even number is %d:",n);
	else
		printf("odd number is %d:",n);
	return 0;
}
