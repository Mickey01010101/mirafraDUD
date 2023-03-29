//program on to convert lower letters
#include<stdio.h>
void lower(char a[]);
	int i;
int main()
{
	char a[100];
	printf("enter the string:");
	scanf("%99[^\n]s",a);
	lower(a);
	printf("%s",a);
	return 0;
}

void lower(char a[])
{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
}
