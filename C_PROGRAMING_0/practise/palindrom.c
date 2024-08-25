#include<stdio.h>
int main()
{
	int n=121;
	int target=n;
	int sum=0;
	int r=0;

	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==target)
		printf("palindrom\n");
	else
		printf("not palindrom\n");
}

