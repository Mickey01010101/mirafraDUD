//palindrome or not
/*
#include<stdio.h>
int main()
{
	int n,temp=0,r,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	for(n;n>0;)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
		printf("palindrome:");
	else 
		printf("not palindrome:");
}



*/
#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
printf("enter the string:");
scanf(" %s",a);
int b=NULL;
int c=strlen(a)-1;
while(c>b)
{
if(a[b]++!=a[c]--)
{
printf("not palindrome:\n");
break;
}
printf("palindrom\n");
break;
}
}
