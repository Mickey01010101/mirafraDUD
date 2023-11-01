#include<stdio.h>
int main()
{
int b=100,i;
for(i=1;i<=b;i++)
{
if(i==2||i==3||i==5||i==7)
printf("%d prime\n",i);
else if(i%2==0||i%3==0||i%5==0||i%7==0||i%9==0)
{
//break;
//printf("%d is not prime\n",i);
}
else
printf("%d is prime\n",i);
}
}
