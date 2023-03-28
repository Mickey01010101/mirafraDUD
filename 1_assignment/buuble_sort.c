//1.bubble sort								28-03-2023
#include<stdio.h>
int main()
{
	int arr[5],i,j,n,temp=0;
	printf("enter the elements:");
	for(j=0;j<5;j++)
	{
		scanf("%d",&arr[j]);
		n++;
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(j=0;j<5;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
}


/*

#include<stdio.h>
int main()
{
	int arr[5],i,j,n,temp=0,flag=0;
	printf("enter the elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		n++;
	}

	for(i=0;i<n-1;i++)
		{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
	if(flag==0)
	break;
	}

	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}


*/
