#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%(1+1)==0)
		printf("even");
	else if(n%2!=0||n%3!=0||n%5!=0||n%7!=0||n%9!=0&&n%2!=0)
		printf("prime number\nodd number");
	else if(n%2!=0||n%3!=0||n%5!=0||n%7!=0||n%9!=0)
		printf("prime");
	else if(n%(3-1)!=0)
		printf("odd");
}
