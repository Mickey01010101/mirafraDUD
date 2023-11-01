#include<stdio.h>
int main()
{
	int i,j,k,count,size=5;
	int arr[5]={1,1,2,2,3};
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<size-1;k++)
				{
					arr[k]=arr[k+1];
				}
				size=size-1;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
