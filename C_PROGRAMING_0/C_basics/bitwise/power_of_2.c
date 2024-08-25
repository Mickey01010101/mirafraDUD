#include<stdio.h>
int main()
{
	int n=4;
	if((n!=0)&&(n&(n-1))==0)
		printf("power of 2\n");
	else
		printf("not power of 2\n");
}
