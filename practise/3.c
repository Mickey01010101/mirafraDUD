// IS THERE ANY RETURN VALUES OF PRINTF() ND SCANF() FUNCTIONS:?

/*

ABSOLUTELY YES,


PRINTF():::UPON THE SUCCUS oF RETURN the printf() function returns the no.of charecters print
if output is error encounted it will returns negative(-) values


#include<stdio.h>
int main()
{
int a=35;
printf("%d\n",printf("%d\n",a));
}



SCANF():::the scanf() function returns no.of input items are succusfully matched/assigned
*/
#include<stdio.h>
int main()
{
char a;
printf("%c\n",scanf("%c",&a));
printf("%c\n",a);
}

