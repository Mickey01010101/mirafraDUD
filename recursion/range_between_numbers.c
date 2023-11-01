#include<stdio.h>
void function(int n1,int n2);
int main()
{
	int n1,n2;
	printf("enter starting number:\n");
	scanf("%d",&n1);
	printf("enter the ending number:\n");
	scanf("%d",&n2);

	function(n1,n2);
}

void function(int n1,int n2)
{
	if(n1<n2)
	{
		printf("%d\t",n1);
		return function(n1+1,n2);
	}
}
