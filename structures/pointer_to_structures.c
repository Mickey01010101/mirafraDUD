u//POINTER TO STRUCTURES
/*
   The pointer points to the addres of memory location stored in the structure is called pointer to structure



#include<stdio.h>
struct student 
{
	int id;
	char name[20];
	float marks;
};
struct student s1={1,"hi",3.14};
struct student s2={2,"hii",4.13};
struct student s3[3];
int i;
int main()
{
	struct student *ptr;
	ptr=&s1;
	printf("%d\t%s\t%f\n",ptr->id,ptr->name,ptr->marks);
	ptr=&s2;
	printf("%d\t%s\t%f\n",ptr->id,ptr->name,ptr->marks);
	printf("%d\t%s\t%f\n",(*ptr).id,(*ptr).name,(*ptr).marks);	//or
	//printf("%d\t%s\t%f\n",ptr->id,ptr->name,ptr->marks);
	ptr=s3;
	for(i=0;i<3;i++)
	{
		printf("enter the elements\t");
		scanf("%d%s%f",&ptr[i].id,(ptr)[i].name,&ptr[i].marks); //or
		//scanf("%d%s%f",&s3[i].id,s3[i].name,&s3[i].marks);
	}
	for(i=0;i<3;i++)
	{
		printf("after tht elements is \t");
		printf("%d\t%s\t%f\n",ptr[i].id,ptr[i].name,ptr[i].marks);//or
		//printf("%d\t%s\t%f\n",ptr[i]->id,ptr[i]->name,ptr[i]->marks);

	}
}

*/
