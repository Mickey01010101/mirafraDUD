#include<stdio.h>
#include<string.h>
char *strmerge(char s1[],char s2[]);
int main()
{
	char s1[100],s2[100],*str1;
	strcpy(s1,"kalyan");
	strcpy(s2,"sai");

	str1=strmerge(s1,s2);
	printf("%s\n",str1);
}

char *strmerge(char s1[],char s2[])
{
	static char str[100];
	int i,j=0;
	for(i=0;s1[j]!='\0'||s2[j]!=0;j++)
	{
		if(s1[j]!=0)
		{
			str[i]=s1[j];
			i++;
		}
		if(s2[j]!=0)
		{
			str[i]=s2[j];
			i++;

		}
	}
return str;
}
