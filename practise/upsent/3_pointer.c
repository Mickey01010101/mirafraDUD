#include<stdio.h>
int p;
int main()
{
int a=1,b=20;
int *p1=&a;
int *p2=&b;
p=*p1+*p2;
printf("%d\n",p);
}

