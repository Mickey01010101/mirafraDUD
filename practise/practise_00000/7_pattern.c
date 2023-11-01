#include<stdio.h>
int main()
{
int i,j,n;
printf("enter how many rows u want:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("*");
printf("\n");
}
return 0;
} 
