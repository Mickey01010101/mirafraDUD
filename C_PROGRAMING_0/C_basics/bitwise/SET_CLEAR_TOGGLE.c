#include<stdio.h>

#define SET_BIT(x,p) x|(0x01<<p)
#define CLEAR_BIT(x,p) x&(~(0x01<<p))
#define TOGGLE_BIT(x,p) x^(0x01<<p)

int main()
{
	int x=10;
	int p=3;
	printf("%d\n",SET_BIT(x,p));
	printf("%d\n",CLEAR_BIT(x,p));
	printf("%d\n",TOGGLE_BIT(x,p));
}

