//Check if the given no. is –ve :  if((n >> 31) &  1 ) == 1) then –ve		28-03-2023
#include<stdio.h>
void neg(int n)
{
	if((n>>31)&1==1)
	printf("negative num");
	else
	printf("positive num");
}
int main()
{
	int n;
	printf("enter a num\n");
	scanf("%d",&n);
	neg(n);
}
