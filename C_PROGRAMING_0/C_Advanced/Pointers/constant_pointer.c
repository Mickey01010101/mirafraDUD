/*
#include<stdio.h>
int main()
{
	int a=5;
	int b=10;
	int *const ptr=&a;
	*ptr=10;
	printf("%d",*ptr);
	ptr=&b;			//wrong...we cant modified
	printf("%x",ptr);
}
//here address will not be chaged or modifies only value will be changed 

*/







/*

#include<stdio.h>
int main()
{
	int a=5;
	int b=10;
	int  *const ptr=&a;
	int **p=&ptr;
	*p=&b;
	printf("%d",*ptr);
}

//we cannot modify ptr to point to a different address using ptr directly. Do it indirectly."


