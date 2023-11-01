#include<stdio.h>
struct student
{
int id;
char name[20];
float c;
};
struct student s2={101,"hello",3.14};
int main()
{
printf("%d\n%s\n%f\n",s2.id,s2.name,s2.c);
}

