			//ARRAY OF STRUCTURES

// USE : To store a information in multiple entities of diifernt data types .

#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float marks;
};
int i;
int main()
{
	struct student s1[3];
	for(i=0;i<3;i++)
	{
		printf("enter the elemets:");
		scanf("%d%s%f",&s1[i].id,s1[i].name,&s1[i].marks);
	}
	for(i=0;i<3;i++)
	{
		printf("after the elemts:");
		printf("%d\t%s\t%f\n",s1[i].id,s1[i].name,s1[i].marks);
	}
}
