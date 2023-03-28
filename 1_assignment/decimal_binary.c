//Implement decimal to binary (-ve also)	28-03-2023


#include<stdio.h>
int main()
{
int n,r,sum=0,i=1;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
r=n%2;
sum=sum+r*i;
i=i*10;
n=n/2;
}
printf("%d\n",sum);
}
