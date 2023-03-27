//practising pointers
#include<stdio.h>
int main()
{
int a=5;
int *p=NULL;
p=&a;
printf("%d\n",a);
printf("%d\n",*(&a));
printf("%d\n",*p);
printf("%p\n",p);
printf("%u\n",&a);
printf("%lu\n",&a);
printf("%llu\n",&a);
printf("size of %zu\n",sizeof(p));
}
