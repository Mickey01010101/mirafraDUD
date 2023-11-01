/*
#include<stdio.h>
int main()
{
int a=20;
float b=20;
void *p;
p=&a;
printf("%d\n",*(int*)p);
p=&b;
printf("%f",*(float*)p);
return 0;
}
*/

#include<stdio.h>
int main()
{
int a=23;
int *p=&a;;
*p=NULL;
printf("%d\n",*p);
}
