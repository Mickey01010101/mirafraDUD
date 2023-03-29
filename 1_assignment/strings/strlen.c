//write a program to find out a string length
#include<stdio.h>
int length_of_string(char str[]);
int i;
int main()
{
	char str[100];
	int length;
	printf("enter the string:");
	scanf("%[^\n]s",str);
	length=length_of_string(str);
	printf("the length of string is %d",length);
	return 0;
}

int length_of_string(char str[])
{
	int count=0;
	for(i=0;i>=0;i++)
	{
		count++;
	}
	return count;
}
