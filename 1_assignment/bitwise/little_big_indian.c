//whether check given number is little indian or big indian		29-03-2023 
#include<stdio.h>
int main()
{
short int n;
printf("enter the number:\n");
scanf("%hd",&n);
if(n&0x01)
printf("little indian" );
else
printf("big indian");
}

