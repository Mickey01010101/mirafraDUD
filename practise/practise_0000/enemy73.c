#include<stdio.h>
int main()
{
char c;
printf("enter the charecter:");
scanf("%c",&c);
((c>94&&c<91)||(c>96&&c<123))?printf(" alphabet:"):printf(" not alphabet:");
return 0;
}
