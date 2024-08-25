#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	char name[100];
	struct student *next;
}student;

student *createnode()
{
	student *new=(student *)malloc(sizeof(student));
        printf("enter id\n");
	scanf("%d",&new->id);
        printf("enter name\n");
	scanf(" %s",new->name);
	new->next=NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("%d\t%s\n",p->id,p->name);
		p=p->next;
	}
}


student *reversenode(student *head)
{
	student *current=head;
	student *previous=NULL;
	student *temp=NULL;
	while(current!=NULL)
	{
		temp=current->next;
		current->next=previous;
		previous=current;
		current=temp;
	}
	return previous;
}


int main()
{
	student *h=NULL,*n=NULL,*l=NULL;
	char ch;
        int p;
	while(1)
	{ 
		n=createnode();
		if(!h)
			h=n;
		else
		{

			l->next=n;
		}
		l=n;
		printf("want to create another node\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
			break;
	}
	printll(h);
        h=reversenode(h);
        printf("after reverse\n");
	printll(h);
}

