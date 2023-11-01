#include<stdio.h>
void function(char *str);
int main()
{
	char str[100];
	printf("enter the string:\n");
	scanf("%s",str);
	function(str);
}

void function(char *str)
{
	if(*str==0)
		return ;
	function(str+1);
	printf("%c",*str);
}

