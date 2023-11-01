#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,j,k;
	    char s[100];
	printf("enter the string:");
	scanf("%s",s);

	n=strlen(s);
	n=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		for(j=1;i<=n-1;j++)
		{
			printf(" ");
		}
		for(j=1,k=1-i;j<=i;j++)
		{
			printf("%c",s[k]);
			k++;
		}
		for(j=1,k=k-1;j<i;j++)
		{
			k--;
			printf("%c",s[k]);
		}
		printf("/n");
	}
}

