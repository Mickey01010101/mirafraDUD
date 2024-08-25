
/*check whether that bit is set or not if that bit is set clear and if that bit is clear then set
 
5=0101;
p1=2 =1set
p2=3 0clear
so here 
p1 is clear 
p2 is set

output =1001; 
		*/

#include<stdio.h>
#define SET_BIT(n,p)   (n|=(0x01<<p))
#define CLEAR_BIT(n,p) (n&=(~(0x01<<p)))
#define POSITION(n,p)  (n&(0x01<<p))
int main()
{
	int n=5;
	int p1=2;
	int p2=3;
	if(POSITION(n,p1)!=POSITION(n,p2))
	{
		if(POSITION(n,p1))
		{
			CLEAR_BIT(n,p1);
			SET_BIT(n,p2);
		}
		else
		{
			SET_BIT(n,p1);
			CLEAR_BIT(n,p2);
		}
		printf("%d\n",n);
	}
	else
	{
		printf("arey same yaar\n");
	}

}

