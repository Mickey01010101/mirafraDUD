			//structure packing

//packing the data.simple add the data
//you can avoid padding use #pragma pack(1)

#include <stdio.h>
#pragma pack(1)

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
