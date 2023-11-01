#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter the a,b,c,d values:");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=a>b?a:b;
e=e>c?e:c;
e=e>d?e:d;
printf("%d is graeter\n",e);
return 0;
}
