
#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a%b;
}
int mod(int a,int b)
{
	return a/b;
}

int main()
{
	int a,b;
	char ch;
	int(*p)(int,int);
	printf("enter a operator b values:");
	scanf("%d%c%d",&a,&ch,&b);
	switch(ch)
	{
		case '+':p=add;
			 printf("add is %d\n",p(a,b));
			 break;
		case '-':p=sub;
			 printf("sub is %d\n",p(a,b));
			 break;
		case '*':p=mul;
			 printf("%d\n",p(a,b));
			 break;
		case '%':p=div;
			 printf("%d\n",p(a,b));
			 break;
		case '/':p=mod;
			 printf("%d\n",p(a,b));
			 break;
	}
}
