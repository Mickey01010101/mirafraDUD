//Swap 2 no. using bit-wise:  x = x^y; y = x^y; x = x^y;		28-03-2023
#include<stdio.h>
int swaap(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping:  a:%d  b:%d\n",a,b);
}
int main()
{
	int a,b;
	printf("enter a 2 num");
	scanf("%d %d",&a,&b);
	printf("Before swapping  a:%d  b:%d\n",a,b);
	swaap(a,b);
}
