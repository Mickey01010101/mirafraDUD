#include<stdio.h>
void stringreverse(char *str);
int main()
{
char str[100];
printf("enter the string:");
scanf("%s",str);
stringreverse(str);
}
void stringreverse(char *str)
{
if(*str==0)
return;
{
stringreverse(str+1);
printf("%c",*str);
}
}
