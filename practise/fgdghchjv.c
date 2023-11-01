#include<stdio.h>
int main()
{
	float a;
	int b;
	printf("enter a 3 digit number");
	scanf("%f",&a);
	b=(int)a%10;
	printf("%d",b);
}

