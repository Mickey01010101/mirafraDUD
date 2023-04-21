		//	STRUCTURE PADDING

//use: To increase the performance and reduce the clock cycles and memory wastage

#include <stdio.h>


struct student 
{
    int id;
    char c;
};

int main() {

    struct student s1;
    printf("%d",sizeof(s1));

    return 0;
}
