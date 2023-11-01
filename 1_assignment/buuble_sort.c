//1.bubble sort								28-03-2023
#include<stdio.h>
int main()
{
	int arr[100],i,j,n,temp=0,flag=0;
	printf("enter the how many elements do u want:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}

	for(i=0;i<n-1;i++)
	{
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

	for(j=0;j<n;j++)
	{
		printf("%d\t ",arr[j]);
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
