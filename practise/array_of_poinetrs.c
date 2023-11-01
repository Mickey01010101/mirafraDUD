					// ARRAY OF POINTERS
#include <stdio.h>

int main() {
    // Write C code here
    int a=1;
    float b=2;
    char c[3]="abc";
    void *p[3]={&a,&b,&c};
    int i=0;
    /*for(i=0;i<5;i++)
    {
    scanf("%d\n",&p[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p[i]);
    }*/
    printf("%d\n",*(int*)p[0]);
    printf("%f\n",*(float*)p[1]);
    printf("%s\n",(char*)p[2]);
    return 0;
}
