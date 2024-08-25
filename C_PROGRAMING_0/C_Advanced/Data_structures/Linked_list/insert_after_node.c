#include<stdio.h>
#include<stdlib.h>

typedef struct hi
{
        int id;
        char name[20];
        struct hi *nxt;
}hi;

hi *createnode(void);

void printLL(hi *p);

hi *insertafternode(hi *head,int id);

int main()
{
        hi *h=NULL,*n=NULL,*l=NULL;
        char ch;
        while(1)
        {
                n=createnode();
                if(!h)
                        h=n;
                else
                        l->nxt=n;
                l=n;
                printf("if you want another node?\n");
                scanf(" %c",&ch);
                if(ch=='n'|ch=='N')
                        break;
        }
        printLL(h);
	int id;
	printf("enter the id\n");
	scanf("%d",&id);
	h=insertafternode(h,id);
	printLL(h);
}



hi *createnode(void)
{
        hi *new=malloc(sizeof(hi));
        printf("enter the id and name\n");
        scanf("%d%s",&new->id,new->name);
        new->nxt=NULL;
        return new;
}


void printLL(hi *p)
{
        while(p)
        {
                printf("%d\t%s\n",p->id,p->name);
                p=p->nxt;
        }
}

hi *insertafternode(hi *head,int id)
{
	hi *new=createnode();
	hi *current=head;

	while(current!=NULL && current->id!=id)
	{
		current=current->nxt;
	}
	if(current==NULL)
	{
		printf("%d is node is not found so we unable to inserted a node",id);
		free(new);
		return head;
	}
	new->nxt=current->nxt;
	current->nxt=new;
	return head;
}
