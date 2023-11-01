#include<stdio.h>
void strrrev(char s[])
{ 
	int i=0,j=0,temp,p;
	for(i=0;s[i]!=0;i++);
        p=i;
	for(i=0,j=p-1;i<j;i++,j--)
	{ 
         temp=s[i];
         s[i]=s[j];
         s[j]=temp;
        
	} 
       printf("%s",s);
} 
int main() 
{ 
       char s[100];
	printf("enter string");
       scanf("%99[^\n]s",s);
	strrrev(s);
}
