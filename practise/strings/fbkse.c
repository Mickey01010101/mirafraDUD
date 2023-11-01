#include<stdio.h>
#include<string.h>
int main()
{
int length;
char str[100];
printf("enter the string:");
scanf("%s",str);
length=strlen(str);
printf("%d\n",length);
return 0;
}
