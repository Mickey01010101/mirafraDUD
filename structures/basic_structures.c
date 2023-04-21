/*
structure: is a collection of different data type elements:

# To represent more information /complicated programs solved easily by using structure	

# Struct keyword we can use


#include<stdio.h>

//templet create

struct student				
{
	int id;				//these are the structure members
	char name[20];
	float marks;
};

int main()
{							//locally intialised			
	struct student s1={1;"hi",100.98};			//compile time intialisation
	srtuct student s2;
	printf("enter the information:");
	scanf("%d\t%s\t%f\n",&s2.id,s2.name,&s2.marks);		//run time intialisation

	printf("%d\t%s\t%f\n",s1.id,s1.name,s1.marks);		
	printf("%d\t%s\t%f\n",s2.id,s2.name,s2.marks);
}

or

struct student				
{
	int id;				//these are the structure members
	char name[20];
	float marks;
}s1={1;"hi",100.98};			//here also we can intialise

or


struct student				
{
	int id;				//these are the structure members
	char name[20];
	float marks;
};
struct student s1={1,"hi",100};		//gloabally intialise so we access every where



#include<stdio.h>

struct student 
{
    int id;     //member varaibles
    char name[20];
    float c;
}s1={10,"hello",3.87};
struct student s2={12,"hii",4.55};   //s1,s2 are normal structure varaibles

int main()
{
    s1=s2;          //s2 data copies into s1
    printf("%d\n%s\n%f\n",s1.id,s1.name,s1.c);
    if(s1.id>=s2.id) 
    {   //we can't be compare two structures varaibles but compare member vaiables inside the structure
    printf("%d\n%s\n%f\n",s1.id,s1.name,s1.c);
        printf("%d\n%s\n%f\n",s2.id,s2.name,s2.c);
}
}

*/
