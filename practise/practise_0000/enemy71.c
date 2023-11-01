#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
d=a>b?a:b;
d=d>c?d:c;
printf("%d is greater\n",d);
return 0;
}
