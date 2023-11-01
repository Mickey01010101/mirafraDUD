#include<stdio.h>
int chr(char a[],char c);
int i,x,b;
int main()
{
char a[100],c;
printf("enter the string:");
scanf("%s",a);
printf("wt charecter u search:");
scanf(" %c",&c);
x=chr(a,c);
printf(" %d\n",x);
}

int chr(char a[],char c)
{
for(i=0;a[i]!='\0';i++)
{
if(a[i]==c)
b=i;
}

return b; 
}
