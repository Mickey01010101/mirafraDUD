			//write a code to fine the size without using sizeof() operator

#include<stdio.h>
int main()
{
	int a=10;
	char *p1=&a;
	char *p2=(&a)+1;
	printf("%d\n",p2-p1);
} 

		//or

/*

#include<stdio.h>
int main()
{
	int a=5;
	int *p1=&a;
	int *p2;
	p2=p1;
	p1++;
	printf("%d",(int)p1-(int)p2);
}
*/
