#include"my.h"
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
int a,b,x,y,xx,yy;
printf("enter a and b");
scanf("%d%d",&a,&b);
x=add(a,b);
y=sub(a,b);
xx=mul(a,b);
yy=div(a,b);
printf("add=%d\t sub=%d\t mul=%d\t div=%d\n",x,y,xx,yy);
}

