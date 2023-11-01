#include<stdio.h>
int main()
{
int a=NULL,b=2;
int *p1=&a,*p2=&b;
printf("address of a is %p\n%p\n%p\n%p\n",&a,&b,p1,p2);
printf("value of a b *p1 *p2=%d \n%d \n%d \n%d\n %d\n %d\n",a,*(&a),*p1,b,*p2,*(&b));
return 0;
}
