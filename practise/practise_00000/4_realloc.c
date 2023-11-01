#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int *)malloc(sizeof(int));
    int *p1=(int *)realloc(p,0);
    
    if(p1==NULL)
    printf("p is released using realloc\n");

}
