#include<stdio.h>
int main()
{
	int n=5,mul=1;
	int i=0;
	for(i=0;i<5;i++)
	{
		mul*=n;
		n--;
		
	}
	printf("%d\n",mul);
}
