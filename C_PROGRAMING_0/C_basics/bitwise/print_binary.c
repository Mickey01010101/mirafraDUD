#include<stdio.h>
int main()
{
	int n=10;
	for(int i=0;i<8;i++)
	{
		if(n&0x80)
			printf("1");
		else
			printf("0");
	n=n<<1;
	}
}
