//program of range of prime numbers in linked lists

#include<stdio.h>
#include<stdlib.h>

typedef struct prime
{
	int p,co;
	struct prime *nxt;
}prime;

int priime(int i);
prime *createnode(int i,int cp);
void printLL(prime *a);


int main()
{
	prime *H=NULL,*N=NULL,*L=NULL;
	int i,n1,n2;
	printf("enter n1 nd n2 values:");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(priime(i)&&priime(i+2))
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


int priime(int i)
{
	if(i==2||i==3||i==5||i==7)
		return 1;
	else if(i%2==0||i%3==0||i%5==0||i%7==0)
		return 0;
	else 
		return 1;
}

prime *createnode(int i,int cp)
{
	prime *new=(prime *)malloc(sizeof(prime));
		new->p=i;
	new->co=cp;
	new->nxt=NULL;
	return new;
}

void printLL(prime *a)
{
while(a)
{
	printf("%d %d\n",a->p,a->co);
	a=a->nxt;
}
}


