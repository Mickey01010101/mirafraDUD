// WAP to check if an   architecture is Little Endian or Big Endian?
 

#include<stdio.h>
int main()
{
	int x=0x12345678;
	char *p=(char *)&x;
	if(*p==0x12)
		printf("little Endian");
	else
		printf("Big Endian");
}


//lower value stores in lower address and higher value stores in higher address = little Endian
//lower value stores in higher address and higher value stores in lower address = big Endian
