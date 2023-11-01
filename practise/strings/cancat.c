#include<stdio.h>
void concat(char a[],char b[]);
int i,j;
int main()
{
char a[100];
char b[100];
printf("enter the string 1 nd string 2:");
scanf("%s%s",a,b);
concat(a,b);
printf("%s",b);
}

void concat(char a[],char b[])
{
for(i=0;b[i]!='\0';i++)
j=i+1;
for(i=0;b[i]!='\0';i++,j++)
b[j]=a[i];
}
