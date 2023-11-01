#include<stdio.h>
#include<stdlib.h>

typedef struct student 
{
	int id;
	char name[20];
	struct student *nxt;
}student;


student *createnode()
{
	student *new=(student *)malloc(sizeof(student));
	printf("enter the student id:\n");
	scanf("%d",&new->id);
	printf("enter the student name:\n");
	scanf("%s",new->name);
	new->nxt=NULL;
	return new;
}

void printLL(student *p)
{
	while(p)
{

		printf("%d\t%s\n",p->id,p->name);
	p=p->nxt;
}
}

student *reversenode(student *t)
{
	student *current=t,*previous=NULL,*temp=NULL;
		while(current!=NULL)
		{
			temp=current->nxt;
			current->nxt=previous;
			previous=current;
			current=temp;
		}
	return previous;
} 





int main()
{
	student *H=NULL,*N=NULL,*L=NULL;
	char ch;
	int p;
	while(1)
	{
		N=createnode();
		if(!H)
			H=N;
		else
			L->nxt=N;
		L=N;
		printf("do u want create another node:?\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n'||ch=='N')
			break;
	}
	printLL(H);
	H=reversenode(H);
	printf("after reverse node:\n");
	printLL(H);
}
