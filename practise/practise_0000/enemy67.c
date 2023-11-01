#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greater:");
else if(b>c&&b>a)
printf("b is greater:");
else if(c>a&&c>b)
printf("c is greater:");
else
printf("a b c are equal:");
return 0;
}

