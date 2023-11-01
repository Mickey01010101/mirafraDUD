#include<stdio.h>
#include<stdlib.h>

struct prime
{
	int p;
int co;
	struct prime *nxt;
};


int isprime(int i)
{
	if(i==2||i==3||i==5||i==7)
		return 1;
	else if(i%2==0||i%3==0||i%5==0||i%7==0)
		return 0;
	else 
		return 1;
}


struct prime *createnode(int i,int cp)
{
	struct prime *new=(struct prime *)malloc(sizeof(struct prime));
	new->p=i;
	new->co=cp;
	new->nxt=NULL;
	return new;
}

void printLL(struct prime *a)
{
	while(a)
	{
		printf("%d %d\n",a->p,a->co);
		a=a->nxt;
	}
}


int main()
{
	struct prime *H=NULL,*N=NULL,*L=NULL;
	int i,n1,n2;
	printf("enter n1 nd n2:");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(isprime(i)&&isprime(i+2))
		{
			N=createnode(i,i+2);
			if(H==NULL)
			{
				H=N;
			}
			else
			{
				L->nxt=N;
			}
			L=N;
		}
	}
	printLL(H);
}
