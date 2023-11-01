#include<stdio.h>
int main()
{
int i,n,exit;
printf("enter the number:");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d\n",i);
i++;
}
int j=1;
while(j>=n){
printf("%d\n",j);
j--;
}
return 0;
}
