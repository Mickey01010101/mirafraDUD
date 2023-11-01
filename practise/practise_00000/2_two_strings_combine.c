#include<stdio.h>
#include<string.h>
void function (char str1[],char str2[]);
int main()
{
    char str1[100];
    char str2[100];
    printf("enter the string 1\n");
    scanf("%s",str1);
    printf("enter the string 2\n");
    scanf("%s",str2);
   if((strlen(str1))==(strlen(str2)))
    {
        function(str1,str2);
    }
else
printf("strings are not equal\n");
}

void function(char str1[],char str2[])
{
    int i,j;
    char str3[100];
    for(i=0,j=0;(str1[i]!=0)&&(str2[i]!=0);i++,j++)
    {
        str3[j++]=str2[i];
        str3[j]=str1[i];
    }
    printf("%s",str3);
}
