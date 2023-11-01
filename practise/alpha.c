#include<stdio.h>
#define UPPER(c) c>='A'&&c<='Z'
#define LOWER(c) c>='a'&&c<='z'
#define NUMBER(c) c>='0'&&c<='9'
int main()
{
char c;
printf("enter a charecter:");
scanf("%c",&c);
if((UPPER(c))||(LOWER(c))||(NUMBER(c)))
printf("alphanumeric ");
else 
printf("not alphanumeric");
return 0;
}
