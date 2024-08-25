#include<stdio.h>
int main()
{
	int n=5;
	int p=2;
	if(n&(0x01<<p))
		printf("on\n");
	else
		printf("off\n");

}
