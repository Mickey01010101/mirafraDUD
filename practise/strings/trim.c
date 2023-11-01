#include<stdio.h>
#include<stdlib.h>
void function(char *str);
int main()
{
int n;
char *str=(char *)malloc(50);
printf("enter the string:");
scanf(" %[^\n]s",str);
function(str);
free(str);
}

void function(char *str)
{
int i,j,count=0;
for(i=0;str[i]==32;i++)
{
count++;
}
for(i=0;str[i]!=0;i++)
{
str[i]=str[i+count];
}
for(i=i-count-1;str[i]==32;i--)
{
	str[i]='\0';
}
printf("%s",str);
}

