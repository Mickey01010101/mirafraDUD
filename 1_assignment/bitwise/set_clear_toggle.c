//set bit clear bit toggle bit


#include<stdio.h>
#define SET_BIT(n,p)	(n|(0x01<<p))
#define CLEAR_BIT(n,p)	(n&(~(0x01<<p)))
#define TOGGLE_BIT(n,p)	(n^(0x01<<p))
int main()
{
int n,p;
printf("enter the value nd the position\n");
scanf("%d%d",&n,&p);
printf("%d\n",SET_BIT(n,p));
printf("%d\n",CLEAR_BIT(n,p));
printf("%d\n",TOGGLE_BIT(n,p));
}

