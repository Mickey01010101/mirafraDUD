#include<stdio.h>
#include<unistd.h>

int main()
{
char *args[]={"/dev/ls","-a","-s",NULL};
execv(args[0],args);
fprintf(stderr,"execv fails");
}
