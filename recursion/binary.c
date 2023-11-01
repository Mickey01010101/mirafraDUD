#include<stdio.h>
void function(int n);
//int r;
int main()
{
	int n;
	printf("enter the number\n:");
	scanf("%d",&n);
	function(n);
}
void function(int n)
{
int r;
	if(n==0)
		return ;
	r=n%2;
	function(n/2);
	printf("%d",r);
}
