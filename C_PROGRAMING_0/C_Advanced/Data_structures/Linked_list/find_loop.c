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
int findloop(hi *head);

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
                if(ch=='n'||ch=='N')
                        break;
        }
        printLL(h);
	l->nxt=h->nxt;
        int x=findloop(h);
	if(x==1)
		printf("loop findout");
	else
		printf("no loop");

 
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

int findloop(hi *head)
{
        hi *slow=head;
        hi *fast=head;
        while(fast!=NULL&&fast->nxt!=NULL)
        {
                slow=slow->nxt;
                fast=fast->nxt->nxt;
		if(slow==fast)
			return 1;
        }
	return 0;

        
}
