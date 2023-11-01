//function pointers


#include<stdio.h>
int sum (int a,int b);
int x;
int main()
{
//syntax:
//retrun type of datatype * (pointer name) (arguments datatypes)
int (*p)(int,int)=sum;
x=p(2,3);
printf("%d\n",x);
}

int sum (int a,int b)
{
return a+b;
}
