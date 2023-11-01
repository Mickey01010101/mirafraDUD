#include<stdio.h>
int search(char s1[],char sub[]);
int sear(char s1[],char sub[],int j);
int main()
{
	char s1[100];
	char sub[100];
	int c;
	printf("enter first strng\n");
	scanf("%99[^\n]s",s1);
	printf("enter string\n");
	scanf(" %99[^\n]s",sub);
	c=search(s1,sub);
	printf("%d",c);
}
int search(char s1[],char sub[])
{
	int i=0,j,c;
	for(j=0;s1[j]!=0;j++)
	{
		if(s1[j]==sub[i])
		{
			c=sear(s1,sub,j);
			if(c>=0)
				return (c);
			else
				return (-1);

		}
	}
}
int sear(char s1[],char sub[],int j)
{
	int c=0,i=0,e;
	for(;s1[j]!=0;j++)
	{
		e=j;
		for(;sub[i]!=0&&s1[e]!=0;e++,i++)
			{
				if(sub[i]!=s1[e])
					{
						i=0;
					break;
						}
			
			}
			if(sub[i]==0)
				return (j-c);
	}
		return 0;
	}						

