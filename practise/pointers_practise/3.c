#include<stdio.h>
int main()
{
int a=5;
int *p1=&a;
int **p2=&p1;
printf("a=%d\n *p1=%d **p2=%d\n",a,*p1,**p2);
printf("a=%p\n %p\n %p\n ",&a,*(&p1),**(&p2));
return 0;
}
