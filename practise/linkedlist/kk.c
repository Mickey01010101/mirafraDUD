// Linked list creation
#include<stdio.h>
#include<stdlib.h>

typedef struct student 
{
	int id;
	char name[50];
	struct student *next;
}student;
student * createnode(void)
{
	student *new=(student *)malloc(sizeof(student));
	scanf("%d %s",&new->id,new->name);
	new->next=NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("%d %s\n",p->id,p->name);
		p=p->next;
	}
}

student * insertatposition(student * t,int p)
{
	int i=1;
	student *n=NULL,*h=NULL;
	h=t;
	n=createnode();	
	if(p==1)
	{
		n->next=h;
		return n;
	}
	else
	{
		while(i<(p-1) && t)
		{
			t=t->next;
			i++;
		}
		if(t==NULL)
		{
			printf("you have only %d nodes but you entered %d\n",i-1,p);
			return h;
		}
		n->next=t->next;
		t->next=n;
		return h;
	}
}
student * insertafterkey(student *t,int p)
{
        student *n=NULL,*h=NULL;
	h=t;
	n=createnode();
	while(p != t->id)
	{
		t=t->next;
		if(t==NULL)
         	{
                	printf("key %d is not in list\n",p);
                 	return h;
         	}

	}
	n->next=t->next;
	t->next=n;
	return h;
}
void insertbeforekey(student **h,int p)
{
	student *n=NULL,*t=NULL;
	t=*h;
	n=createnode(); 
	if(t->id==p)
	{
		n->next=t;
		t=n;
		*h=t;
	}
/*	else
	{
		while(p!=t->next->id)
		{
			t=t->next;	
			if((t->next)==NULL)
               		{
		          	printf("key %d not in the list\n",p);
				goto one;
			}		
		}
		n->next=t->next;
		t->next=n;
one:	printf("\n");
	}*/
}
int main()
{
	student *h=NULL,*n=NULL,*l=NULL;
	char ch;
	int x,p;
	while(1)
	{
		n=createnode();
		if(!h)
			h=n;
		else
			l->next=n;
		l=n;
		printf("do you want to create one more node ?\n");
		scanf(" %c",&ch);
		if(ch=='n')
			break;
	}
	while(1)
	{
		printf("1)insert at a position\n2)insert before a key\n3)insert after a key\n4)exit\n");
		printf("choose option:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:	printf("which position:");
				scanf("%d",&p);
				h=insertatposition(h,p);
				break;
			case 2:	printf("key number:");
				scanf("%d",&p);
				insertbeforekey(&h,p);
				break;
			case 3:	printf("key number:");
				scanf("%d",&p);
				h=insertafterkey(h,p);
				break;
			case 4:break;
		}
		if(x==4)
			break;
		printf("\n");
		printll(h);	
	}
	printll(h);
}
