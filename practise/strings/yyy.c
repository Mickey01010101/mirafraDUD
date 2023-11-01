#include<stdio.h>
int chtoin(char arr[])
{
int sum=0,i;
for(i=0;arr[i]!=0;i++)
{
arr[i]-=48;
sum=sum*10+arr[i];
}
return sum;
}


int main(int argc,char *argv[])
{
int a,b;
a=chtoin(argv[1]);
b=chtoin(argv[3]);
switch(argv[2][0])
{
case '+':printf("add=%d\n",a+b);break;
case '-':printf("sub=%d\n",a-b);break;
case '*':printf("mul=%d\n",a*b);break;
case '/':printf("quo=%d\n",a/b);break;
case '%':printf("rem=%d\n",a%b);break;
}
/*if((argv[2][0])=='+')
{
int d;
d=(argv[1][0]-48)+(argv[3][0]-48);
printf("%d",d);
}*/
return 0;
}
