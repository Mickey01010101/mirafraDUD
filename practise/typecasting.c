/*	                		TYPECASTING

- THE VALUES CAN BE CHANGED CONVERTING ONE DATA TYPE TO ANOTHER DATA TYPE

IMPLICIT TYPECASTING: its gonna system defined
EXPLICIT TYPECASTING: its gonna  user defined.user forcebully converted one data type to another data type
*/

#include<stdio.h>
int main()
{
int a=5;
float b=a; //implicit 
printf("%f\n",b);
int c=5;
float d=(float)c;
printf("%f\n",d);
}
