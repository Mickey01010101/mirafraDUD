#include<stdio.h>
int main()
{
int big,small,i,n,n1,n2;
printf("how many numbers u want:");
scanf("%d",&n);
printf("enter the first number:");
scanf("%d",&n1);
big=n1;
small=n1;
for(i=0;i<n;i++)
{
printf("enter the second number:");
scanf("%d",&n2);

if(n2>big)
big=n2

if(n2<small)
small=n2

}
printf("the big value is %d",big);
printf("the small value is %d",small);
}

