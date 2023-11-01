#include<stdio.h>
int main()
{
char a='a',b='b';
char *p1=&a;
char *p2=&b;
if(*p1>*p2)
printf("%c",*p1);
else
printf("%c",*p2);
}
