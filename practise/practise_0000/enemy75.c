#include<stdio.h>
int main()
{
int a,n;
printf("eneter the number:");
scanf("%d",&n);
while(n>0)
{
printf("%d*",n);
a=n-1;
n=n*a;
}
printf("the product is =%d",n);
return 0;
}

