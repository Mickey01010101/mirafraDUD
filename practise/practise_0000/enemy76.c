#include<stdio.h>
int main()
{
int n,a=1;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
a=a*n;
printf("%d*",n);
n--;
}
printf("=%d\n",a);
return 0;
}


