//convert decimal to binary

/*
#include<stdio.h>
int main()
{
	int n,r,sum=0,i=1;
	printf("enetr the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		sum=sum+r*i;
		i=i*10;
		n=n/2;
	}
	printf("%d\n",sum);
}


//with using recursion

#include<stdio.h>
void binary(int n);
int main()
{
int n;
printf("eneter the number:");
scanf("%d",&n);
binary(n);
}
void binary(int n)
{
 int r,sum=0,i=1;
if(n==0)
return ;

r=n%2;
//binary(n/2)
sum=sum+r*i;
i=i*10;
binary(n/2);
printf("%d",sum);

}

*/
//using bitwise operators

#include<stdio.h>
int main()
{
int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<8;i++)
{
	if(n&0x80)
	printf("1");
	else
	printf("0");
n=n<<1;
}
}
