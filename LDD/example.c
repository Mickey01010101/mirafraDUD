#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
char* msg="Hello, world!\n";

write(1,msg,14);
exit(0);
}
