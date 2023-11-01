#include<stdio.h>
void function(char str[],char ch[]);
int i;
char ch;
int main()
{
char str[100];
printf("enter the string");
scanf("%s",str);
printf("enter the charecter:");
scanf("%c",ch);
function(str,&ch);
}

void function(char str[],char ch[])
{
for(i=0;str[i]!=0;i++)
{
if(str[i]==ch)
{
printf("match");
}
}
}
