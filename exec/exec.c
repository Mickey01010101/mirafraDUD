#include<stdio.h>
#include<unistd.h>

int main()
{
execl("/bin/ls","ls","-l",NULL);
fprintf(stderr,"exec fails:");
}
