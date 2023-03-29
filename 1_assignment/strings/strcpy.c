#include<stdio.h>
void copy(char a[],char d[]);
int i;
int main()
{
char a[100]="hi guys see my program";
char d[100]="hellow";
copy(a,d);
printf("%s\n",d);
return 0;
}
void copy(char a[],char d[])
{
for(i=0;a[i]!=0;i++)
d[i]=a[i];
}

