#include<stdio.h>
#include<string.h>
int main()
{	char arr[10]="helleh";
	int count=1;
	int a=0;
	int b=strlen(arr)-1;
	while(a<b)
	{
		if(arr[a++]!=arr[b--])
		{
			count=0;
			break;
		}

	}
	if(count==0)
		printf("not palindrom");
	else
		printf("palindrom");
}
