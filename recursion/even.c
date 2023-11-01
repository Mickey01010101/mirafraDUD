#include<stdio.h>
void even(int n);
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	even(n);
}
void even(int n)
{
if(n>0)
{
	if(n%2==0)
		printf("%d\t",n);
		return even(n-1);
}
}
