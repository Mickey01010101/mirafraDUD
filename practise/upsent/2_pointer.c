#include<stdio.h>
int main()
{
int a=5;
int *p;
p=&a;
printf("%d\n",a);
printf("%lu\n",sizeof(a));
printf("%p\n",&a);
printf("%p\n",p);
printf("%d\n",*p);
}


