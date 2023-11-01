#include<stdio.h>
int main()
/*{
int a=5;
int *p1=&a;
int *p2=&a;
int *p3=&a;
printf("%d\n%d\n%d\n",*p1,*p2,*p3);
}*/
{
int a=5,b=10,c=15;
int *p=&a;
printf("%d\n",*p);
p=&b;
printf("%d\n",*p);
p=&c;
printf("%d\n",*p);
printf("%d\n%d\n%d",a,b,c);
printf("%d\n",*p);
}
