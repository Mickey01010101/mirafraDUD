#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if((n!=0)&&((n>>31)&1))
		printf("negative number\n");
	else
		printf("positve number\n");
}
