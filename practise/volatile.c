//			VOLATILE KEYWORD

//the volatile keyword tell to the compiler the varaible value may be change externally so be alert
//volatile is saved in memory.where its stored anywhere in the RAM
//its doesnt place any special location/regeion

#include<stdio.h>
int main()
{
	int i;
	volatile int a=5;
	for(i=0;i<100;i++)
	{
		printf("%d\n",a);
	}
	a=a+5;
	printf("%d",a);
} 
