#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n>0)
printf("postive number:");
else if(n<0)
printf("negative number:");
else if(n==0)
printf("zero:");
else
printf("enter only integers only:");
return 0;
}

