#include<stdio.h>
void function(char str[]);
int i,j,temp,p;
int main()
{
	char str[100];
	printf("enter the string:\n");
	scanf("%s",str);
	function(str);
}

void function(char str[])
{
	for(i=0;str[i]!=0;i++)
		p=i;
	for(i=0,j=p-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
}
