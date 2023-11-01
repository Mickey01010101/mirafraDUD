#include<stdio.h>
int main()
{
	int arr[100],i,j,n,temp=0;
	printf("enter how many elemnts do u want:");
	scanf("%d",&n);
	printf("enter the array elemnts:");
	for(j=1;j<=n;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(i=1;i<=n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}

	for(j=1;j<=n;j++)
	{
		printf("%d\t",arr[j]);
	}
	printf("\n");
}

