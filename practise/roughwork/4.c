#include<stdio.h>
int main()
{
char *p;
p="hello";
printf("%s",*&*&p);
return 0;
}
