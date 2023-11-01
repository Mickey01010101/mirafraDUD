#include<stdio.h>
union hello
{
    char c;
    float marks;
    int id;
};

int main()
{
    union hello s1;
    union hello *ptr=&s1;
//    s1.c='c';
    s1.marks=12.23;
//    s1.id=2;
    printf("%c\n",ptr->c);
    printf("%f\n",ptr->marks);
    printf("%d\n",ptr->id);
    
}
