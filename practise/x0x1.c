#include<stdio.h>
int main()
{
int n,fact=1;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
fact=fact*n;
printf("%d*",n);
n--;
}
printf("%d\n",fact);
return 0;
}

