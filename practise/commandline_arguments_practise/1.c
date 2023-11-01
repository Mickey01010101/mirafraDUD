/* #include<stdio.h>
int main(int argc,char *argv[])
{
printf("argc=%d\n",argc);
printf("argv[0]=%s\n",argv[0]);
printf("argv[1]=%s\n",argv[1]);
printf("argv[2]=%s\n",argv[2]);
printf("argv[3]=%s\n",argv[3]);
}
*/

/*
#include<stdio.h>
int i;
int main(int argc,char *argv[])
{
for(i=0;i<argc;i++)
{
printf("argv[%d]=%s\n",i,argv[i]);
}
}
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int a=atoi(argv[1]);
int b=atoi(argv[2]);
if(argc!=3)
{
printf("please enter 2 arguments:");
exit(0);
}
for(int i=b;i>=a;i--)
printf("%d\n",i);
}
