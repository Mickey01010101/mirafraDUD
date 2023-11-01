#include<stdio.h>
int numeric(char s[]);
int main()
{
	char s[100];
	int c;
	printf("enter strng\n");
	scanf("%99[^\n]s",s);
	c=numeric(s);
	if(c==1)
		printf("numeric\n");
	else	
		printf("not numeric\n");
}
int numeric(char s[])
{
	int i,n=0,j=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]<=47||s[i]>=58)
			j++;
	}
	if(j==0)
		return 1;
	else
		return 0;
}	

