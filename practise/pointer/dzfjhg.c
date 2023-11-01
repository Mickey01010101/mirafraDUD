#include<stdio.h>
int main()
{
int a=20;
int *ptr=&a;
printf("%d\n",*ptr);
printf("%p\n",&ptr);
printf("%p\n",ptr);
printf("%p\n",&a);
}
