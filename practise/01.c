#include<stdio.h>
int function(char str[]);
int count,i;
int main()
{
	int x;
	char str[100];
	printf("enter the string:\n");
	scanf("%s",str);
	x=function(str);
	printf("%d",x);
}
int function(char str[])
{
	for(i=0;str[i]!=0;i++)
	{
		count++;
	}
	return count;
}


