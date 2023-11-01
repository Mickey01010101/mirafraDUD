			//	SQUARE OF NUMBERS 1+4+9+16+25.....+N;

#include<stdio.h>
int main()
{
int n,i,r,sum=0;
printf("enter the number:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
r=i*i;
printf("%d+\t",r);
sum=sum+r;
}
printf("=%d\n",sum);
}
