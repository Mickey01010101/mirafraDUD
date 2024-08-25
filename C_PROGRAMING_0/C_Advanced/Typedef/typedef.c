//Typedef : is a keyword,to create a alias name for existing data type

#include<stdio.h>
typedef struct hi
{
	int id;
	float percentage;
	char name[10];
}hi;
int main()
{
	hi s1={1,95.5,"HeLLO"};
	printf("%d\t%f\t%s\n",s1.id,s1.percentage,s1.name);
}
	

