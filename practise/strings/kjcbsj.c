#include<stdio.h>
void strcopy(char s1[],char s2[]);
int i,j;
int main()
{
char s1[100];
char s2[100];
printf("enter the s1 nd s2:");
scanf("%s%s",s1,s2);
strcopy(s1,s2);
printf("%s",s2);
}


void strcopy(char s1[],char s2[])
{
for(i=0;s1[i]='\0';i++)
{
s2[i]=s1[j];
}
}
