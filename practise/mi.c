#include<stdio.h>
int main()
{
int i,n,a,p;
printf("enter the number for perfroming ascending order operation\n ");
scanf("%d",&n);
printf("enter the first number:\n");
scanf("%d",&a);
p=a;
i=0;
while(i<n-1)
{
printf("enter the %d number\n",i+2);
scanf("%d",&a);
if(a>p)
{
p=a;
i++;
}
else
{
printf("sorry,that number is samller than previous number\n");
p=a;
i++;
}
}
printf("thank oyu for successful  inputs\n");
return 0;
}

