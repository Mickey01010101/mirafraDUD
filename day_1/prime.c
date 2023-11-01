#include<stdio.h>
#define A (n==2||n==3||n==5||n==7)
#define B (n%2==0||n%3==0||n%5==0||n%7==0)
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
if(A)
printf("prime:");
else if(B)
printf("not prime:");
else 
printf("prime:");
}

