#include<stdio.h>
void copy(char a[],char b[]);
int i;
int main()
{
char a[100];
char b[100];
printf("enter the string1 nd string2:");
scanf("%s%S",a,b);
copy(a,b);
printf("%s",b);
}

void copy(char a[],char b[])
{
for(i=0;a[i]!=0;i++)
{
b[i]=a[i];
}
}

