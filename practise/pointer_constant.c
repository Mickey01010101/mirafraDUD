// POINTER CONSTANT

//THE POINTER POINTINGS TO THE THE INTEGER CONSTANT
//	VALUE WILL NOT MODIFIES/CHANGE
//	ADDERESS WILL BE MODIFIED/CHANGE

#include<stdio.h>
int main()
{
	int a=10,b=5;
	int const *ptr=&a;
	printf("%p\n",ptr);
	//*ptr=1000;	//ERROR VALUE WILL NOT CHANGE
	ptr=&b;
	printf("%p\n",ptr);
	printf("%p\n",&ptr);
}
