/*
 

#include<stdio.h>
int main()
{
	int a=5;
	int b=10;
	int const *ptr=&a;
	ptr=&b; //acceptable
	*ptr=20;  //not correct ,wrogn
}

//here we can chage the address but we cant modifies the value

*/
/*

#include<stdio.h>
int main()
{
        int a=5;
        int b=10;
        int  const *ptr=&a;
        int **p=&ptr;
        *p=&b;
        printf("%d",*ptr);
}

//we cannot modify ptr to point to a different value using ptr directly. Do it indirectly."
