#include<stdio.h>
#define MAN(x,y) ((x)>(y)?(x):(y))
int main()
{
int i=10,j=5,k=0;
k=MAN(++i,j++);
printf("%d\n%d\n%d\n",i,j,k);
return 0;
}
