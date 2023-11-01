#include<stdio.h>
#include<unistd.h>

int main()
{
execl("ls","-a","-l",NULL);
fprintf(stderr,"execl fails:");
}
