#include<stdio.h>
int word(char s1[]);
int main()
{
	char s1[100];
	int c;
	printf("enter first strng\n");
	scanf("%99[^\n]s",s1);
	c=word(s1);
	printf("%d",c);
}
int word(char s1[])
{
	int i,n=0,j=0,c=0;
	for(i=0;s1[i]!=0;i++)
	{
		for( ;(s1[i]>96&&s1[i]<123)||(s1[i]>64&&s1[i]<91)||(s1[i]>47&&s1[i]<58);i++,n++);		
if(n!=0)		
	c=c+1;	
n=0;
	}

	return c;
}

