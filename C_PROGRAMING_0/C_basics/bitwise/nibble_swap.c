#include<stdio.h>
int main()
{
	int n=0x51;
	n=((n&0x0F)<<4)|((n&0xF0)>>4);
	printf("0x%x",n);
}
