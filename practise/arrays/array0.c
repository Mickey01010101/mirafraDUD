#include<stdio.h>
int main()
{
	int i,j;
	int arr[10]={1,2,3,4,5,1,2,3,4,5};
	for(i=0;i<10;i++)
	{
		//k=arr[i];
		//for(j=1;j<10;j++)
		//z=arr[j];
             
		if(arr[i]!=arr[i+1])
		{
			printf("%d",arr[i]);
		}
	}
}

