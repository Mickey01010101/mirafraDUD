#include<stdio.h>
char concate(char *str1[],char *str2[]);
int main()
{
char str1="mickey";
char str2="girish";
char *p=concate(&str1,&str2);
printf("%s",p);
}

char concate(char *str1[],char *str2[])
{
while(*str1!=0)
str1++;
while(*str1++=*str2++)
;
return str1;
}

