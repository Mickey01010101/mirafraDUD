#include<stdio.h>
int lower(char a[]);
int i,x;
int main()
{
	char a[100];
	printf("enter a string:");
	scanf("%s",a);
	x=lower(a);
	if(x==1)
		printf("%s",a);
	else
		printf("%s",a);
}

int lower(char a[])
{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
			return 1;
		}
		else if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
			return -1;
		}
	}
}
