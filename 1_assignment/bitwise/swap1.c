//if the 16 bit number swap 2nd bit 3rd bit to 8th bit nd 9th bit
/*example 2nd=4 3rd=5;
	  8th=6 9th=7 
after swaping	2nd=6 3rd=7
		8th=4 9th=5	*/


#include<stdio.h>
int main()
{
short int n,a,b,c,d;
printf("enter the number:");
scanf("%hd",&n);
a=n>>2;
b=n>>3;
c=n>>8;
d=n>>9;
printf("before swapping \na=%d\tb=%d\t\nc=%d\td=%d\n",a,b,c,d);
a=a^c;
c=a^c;
a=a^c;
b=b^d;
d=b^d;
b=b^d;
printf("after swapping \na=%d\tb=%d\t\nc=%d\td=%d\n",a,b,c,d);
}
	
