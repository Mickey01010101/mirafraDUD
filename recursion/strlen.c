#include<stdio.h>
int function(char *str);
int count=0,z;
int main()
{
	char str[100];
	printf("enter thne string:\n");
	scanf("%s",str);
	z=function(str);
	printf("\n%d\n",z);
}


int  function(char *str)
{
	if(*str==0)
		return count;
	function(str+1);
	printf("%c",*str);
	count++;
}
