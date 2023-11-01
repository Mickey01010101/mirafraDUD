#include<stdio.h>
#define SET(x,p) (x|(0x01<<p))
#define CLEAR(x,p) (x&(~(0x01<<p)))
#define TOGGLE(x,p) (x^(0x01<<p))
int main()
{
	int x,p;
	printf("enter the value and the position:\n");
	scanf("%d%d",&x,&p);
	printf("SET = %d\n",SET(x,p));
	printf("CLEAR = %d\n",CLEAR(x,p));
	printf("TOGGLE = %d\n",TOGGLE(x,p));
}


