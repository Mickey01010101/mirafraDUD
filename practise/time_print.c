
/*
time changing to 12 hours to 24 hours format 
input=11:23:23 AM 12 hours timing
outpu=23:23:23 PM 24 hours timing

*/

#include<stdio.h>
int main()
{
	int h,m,s;
	int z=00;

	printf("enter the hh:mm:ss in format\n");
	scanf("%d%d%d",&h,&m,&s);

	if((m>=00&&m<=60)&&(s>=00&&s<=60))
	{
		if(h==12)
		{
			printf("%d:%d:%d AM\n",z,m,s);
		}
		else if(h>=00&&h<12)
		{
			printf("%d:%d:%d PM\n",h+12,m,s);
		}
		else if(h>12&&h<=24)
		{
			printf("%d:%d:%d AM\n",h-12,m,s);
		}
	}
}


