#include<stdio.h>
int fact(int n);
int n,z;
int main()
{
printf("enter the number:\n");
scanf("%d",&n);

z=fact(n);
printf("%d\t%d\n",n,z);
}

int fact(int n)
{
if(n==0) 
return 1;
return n*fact(n-1);
}

