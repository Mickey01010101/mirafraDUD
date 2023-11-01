//compare 2 strings ...if there is equal return 0,greater -1,lower 1

#include<stdio.h>
int compare(char s1[],char s2[]);
int i,x;
int main()
{
	char s1[100];
	char s2[100];
	printf("enter the first string :");
	scanf("%99[^\n]s",s1);
	printf("enter the second string:");
	scanf(" %99[^\n]s",s2);
	x=compare(s1,s2);
	if(x==-1)
		printf("%s greater\n%s lower\n",s2,s1);
	else if(x==1)
		printf("%slower \n%s greater\n",s1,s2);
	else
		printf("both s1 nd s2 are same:");
}


int compare(char s1[],char s2[])
{
	for(i=0;s1[i]!='\0',s2[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
			return -1;
		else if(s1[i]<s2[i])
			return 1;
	}
	if(s1[i]==0&&s2[i]!=0)
		return 1;
	else if(s2[i]==0&&s1[i]!=0)
		return -1;
	else
		return 0;
}

