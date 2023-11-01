#include<stdio.h>
struct hi
{
int id;
char name[20];
float c;
}s1={1,"hello",3.14};

int main()
{
struct hi s2;
printf("%d\t%s\t%f\n",s1.id,s1.name,s1.c);
printf("enter the details\n:");
scanf("%d%s%f",&s2.id,s2.name,&s2.c);
printf("%d\t%s\t%f\n",s2.id,s2.name,s2.c);
}

