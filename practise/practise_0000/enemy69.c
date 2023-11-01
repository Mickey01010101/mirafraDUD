#include<stdio.h>
int main()
{
int n,c;
printf("enter the number:");
scanf("%d",&n);
if(n>=0){
c=n;
printf("%d\n",c);
}
else if(n<0){
c=-(n);
printf("%d\n",c);
}
else 
printf("enter the integers only:");
return 0;
}

