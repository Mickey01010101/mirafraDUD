//Given no. is even or odd:  if(n&1 == 0) then EVEN else ODD		28-03-2023
#include<stdio.h>
void evenorodd(int n)
{
	if(n&1==1)
		printf("odd number");
	else
		printf("even number");
}
int main()
{
	int n;
	printf("enter a num");
	scanf("%d",&n);
	evenorodd(n);
}
