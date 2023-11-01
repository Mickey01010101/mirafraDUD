#include<stdio.h>
void function(char *s,char*f);
int main()
{
char s[]="fUcK";
char f[]="oFF";
function(&s,&f);
}

void function(char *s,char *f)
{
int i=0;
while(s[i]=f[i]='\0')
{
s++;
i++;
printf("%s",s);
}
}


