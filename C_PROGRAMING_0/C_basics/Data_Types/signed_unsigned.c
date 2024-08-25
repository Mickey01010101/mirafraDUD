#include<stdio.h>

int main()
{
	if(sizeof(int)>-1)
		printf("yes\n");
	else
		printf("no\n");
}


/* signed = negative values and zero and positive values 
   unsigned = only zero and positive values

   suppose above size of int =4 bytes comapring to -1 

   	4 = unsigned int 
       -1 = signed int  so here -1 is converted into unsigned int the value is high
*/
