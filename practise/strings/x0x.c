#include<stdio.h>
#include<string.h>
int main()
{
char arr[]="hello\0\0\0";
printf("%d\n",sizeof(arr));
printf("%d\n",strlen(arr));
}

