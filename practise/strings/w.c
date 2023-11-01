#include<stdio.h>
int mystrstr(char s1[],char s2[])
{
	int i,j=0,c,d=0;
	for(i=0;s1[i]!=0;i++)
	{
		
                j=0;
		if(s1[i]==s2[j])
		{
			c=i;
			d=0;
		for(j=0;s2[j]!=0;j++)
		{
			if(s1[c]==s2[j])	//if(s1[i]==s2[j])
			{			//c++;	
				c++;		//else
				d++;		//break;
			}			
		}

                
			if(s2[j]==0&&d==j)	//if(s2[j]==0)
			{
				return i;	//return i;
			}
        	}

	
        
       }
	return -1;

}
int main()
{
	int n;
	char s1[20],s2[20];
	printf("enter tne string\n");
	scanf("%20[^\n]s",s1);
	printf("enter the sub string to search in the main sring\n");
	scanf(" %10[^\n]s",s2);
	n=mystrstr(s1,s2);
	if(n>=0)
		printf("sub string is found at %d index in main string\n",n);
	else 
		printf("sub string is not found in main string\n");
	return 0;

}

