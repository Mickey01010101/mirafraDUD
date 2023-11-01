#include<stdio.h>
int function(int n);
int z;
int count=0;
int main()
{
int n;
printf("enter the number:\n");
scanf("%d",&n);
z=function(n);
printf("%d\n",z);
}

int function(int n)
{
if(n==0)
return count;
n=n/10;
count++;
return function(n);
}

