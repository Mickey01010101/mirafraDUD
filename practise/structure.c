#include<stdio.h>
struct hi
{
int id;
char name[20];
float marks;
}s1={1,"xxx",3.14};
struct hi s2={2,"yyy",3.15};


int main()
{
struct hi s3;
scanf("%d%s%f",&s3.id,s3.name,&s3.marks);
printf("%d\t%s\t%f\n",s3.id,s3.name,s3.marks);
printf("%d\t%s\t%f\n",s2.id,s3.name,s2.marks);
printf("%d\t%s\t%f\n",s1.id,s1.name,s1.marks);
}

