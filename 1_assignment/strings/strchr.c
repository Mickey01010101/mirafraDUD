#include<stdio.h>
int strchra(char s[],char c)
{ 
int i=0;
for(i=0;s[i]!=0;i++)
{ 
if(s[i]==c)
{ 
return i;
} 
} 
} 
int main()
{ 
int m;
char c;
char s[100]="mickey";
scanf("%c",&c);
m=strchra(s,c);
printf("%d",m);
}
