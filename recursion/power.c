#include<stdio.h>
int function(int n,int power);
int z;
int main()
{
int n,power;
printf("enter the number:\n");
scanf("%d",&n);
printf("enter the power:\n");
scanf("%d",&power);
z=function(n,power);
printf("power=%d\n",z);
}


int function(int n,int power)
{
if(power==0)
return 1;
return n*function(n,power-1);
}
