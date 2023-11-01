#include<stdio.h>
#include<string.h>


static struct hello
{
	int a;
	float b;
	char name[100];
}s1={1,1.1,"morning"};
struct hello s2={2,2.2,"afternoon"};

int main()
{
int i;
	struct hello hi;
	struct hello *ptr;
	ptr=&s2;
	struct hello arr[5];
	for(i=0;i<3;i++)
	{
		scanf("%s%d%f",arr[i].name,&arr[i].a,&arr[i].b);
	}

	strcpy(hi.name,"evening");
	hi.a=35;
	hi.b=21.5;
	printf("%s\t\t%d\t\t%f\n",s1.name,s1.a,s1.b);
	printf("%s\t%d\t\t%f\n",ptr->name,ptr->a,ptr->b);
	printf("%s\t\t%d\t\t%f\n",hi.name,hi.a,hi.b);


for(i=0;i<3;i++)
{
	printf("%s\t\t%d\t\t%f\n",arr[i].name,arr[i].a,arr[i].b);
}
}
