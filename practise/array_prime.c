#include<stdio.h>
void function(int arr[]);
int main()
{
	int arr[5]={10,2,3,4,5};
	function(&arr);
}


void function(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(arr[i]==2||arr[i]==3||arr[i]==5||arr[i]==7)
		{
			printf(" prime=%d\n",arr[i]);
		}
		else if(arr[i]%2==0||arr[i]%3==0||arr[i]%5==0||arr[i]%7==0)
		{
			printf(" not prime=%d\n",arr[i]);
		}
		else
		{
			printf("prime=%d\n",arr[i]);
		}
	}
}
