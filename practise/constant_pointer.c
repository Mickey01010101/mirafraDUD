		//CONSTANT POINTER

//CONSTANT POINTER POINTINGS TO THE INTEGER 
//	value will be chaenge or modified but address will not changed->coz of its read-only

#include<stdio.h>
int main()
{
int a=10,b=5;
int *const ptr=&a;
*ptr=100;
printf("%p\n",&ptr);
//ptr=&b;	ERROR BECOZ OF ADDRESS WILL NOT CHANGED
printf("%p\n",&ptr);

printf("%d",*ptr);
}

