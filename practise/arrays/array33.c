#include<stdio.h>
int main()
{
	int n=5,i,j,k;
	int arr[5]={1,2,3,1,2};
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n-1;k++)
				{
					arr[k]=arr[k+1];
				}
				n=n-1;
			}
		}
	}
	for(i=0;i<n;i++)
{
		printf("%d\n",arr[i]);
}
}

