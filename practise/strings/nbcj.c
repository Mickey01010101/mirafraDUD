#include<stdio.h>
int strlength(char str[]);
int i,x,count=0;
int main()
{
char str[100];
printf("enter the string:");
scanf("%s",str);
x=strlength(str);
printf("%d\n",x);
}

int strlength(char str[])
{
for(i=0;str[i]!=0;i++)
{
count++;
}
return count;
}
