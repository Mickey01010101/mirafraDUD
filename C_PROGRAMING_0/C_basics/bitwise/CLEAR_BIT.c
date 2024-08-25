#include<stdio.h>
#define CLEAR_BIT(x,p) x&(~(0x01<<p))
int main()
{
	int x=0x1234+0x45678900;
	int p=3;
	printf("%u\n",CLEAR_BIT(x,p));
}

