//calculate the simple interest
#include<stdio.h>
int main()
{
int p,n;
float si,r,m;
printf("enter the principle,time in months and rate of interset");
scanf("%d%d%f",&p,&n,&r);
m=n/12.0;
si=(p*m*r)/100;
printf("si value is = %f",si);
return 0;
}
