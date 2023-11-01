#include<stdio.h>

void mystrlwr(char s[]);
int mystricmp(char s1[],char s2[])
{
int i;
mystrlwr(s1);
mystrlwr(s2);
for(i=0;s1[i]!=0&&s2[i]!=0;i++)
{
if(s1[i]<s2[i])
return 1;
else if(s1[i]>s2[i])
return -1;
}
if(s1[i]==0&&s2[i]==0)
return 0;
else if(s1[i]==0&&s2[i]!=0)
return -1;
else if(s1[i]!=0&&s2[i]==0)
	return 1;
}
void mystrlwr(char s[])
{
int i;
for(i=0;s[i]!=0;i++)
{
if(s[i]>='A'&&s[i]<='Z')
s[i]=s[i]+32;
}
}

int main()
{
int d;
char s1[20],s2[20];
printf("enter the string to compare\n");
scanf("%20[^\n]s",s1);
printf("enter the another string to compare\n");
scanf(" %20[^\n]s",s2);
d=mystricmp(s1,s2);
if(d==0)
printf("both are equal\n");
else if(d>0)
printf("s1 is bigger\n");
else if(d<0)
printf("s1 is smaller\n");
return 0;
}

