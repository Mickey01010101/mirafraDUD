//write a program on concatination
#include<stdio.h>
void concat(char a[],char b[]);
int i,j;
int main()
{
	char a[100];
	char b[100];
	printf("enter the a,b strings:");
	scanf("%s %s",a,b);
	concat(a,b);
	printf("%s",a);
}




void concat(char a[],char b[])
{
	for(i=0;a[i]!='\0';i++)
	{
		j=i;
	}
	for(i=0;b[i]!='\0';j++,i++)
	{
		a[j]=b[i];
	}

}
