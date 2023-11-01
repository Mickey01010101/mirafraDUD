#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n==2||n==3||n==5||n==7)
{
printf("prime\n");
}
else if(n%2==0||n%3==0||n%5==0||n%7==0)
printf("not prime\n");
else
printf("prime");
}

