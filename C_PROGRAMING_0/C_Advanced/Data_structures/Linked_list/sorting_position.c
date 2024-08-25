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

hi *sorting_position(hi *head,int p);

int main()
{
        hi *h=NULL,*n=NULL,*l=NULL;
        char ch;
	int p;
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
	printf("enter the poistion\n");
	scanf("%d",&p);
	h=sorting_position(h,p);
	printf("after sorting position\n");
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


hi *sorting_position(hi *head,int p)
{

	int i=1;
	hi *new=createnode();
	if(p==1)
	{
		new->nxt=head;
		return new;
	}
	else
		while(i<p-1)
		{
			head=head->nxt;
			i++;
		}
	new->nxt=head->nxt;
	head->nxt=new;
	return head;
}
		
