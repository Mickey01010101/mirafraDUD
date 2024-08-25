#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a and b\n");
	scanf("%d %d",&a,&b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf("after swaping\n");
	printf("%d\t %d\n",a,b);
}
