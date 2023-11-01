//BUBBLE SORT

#include<stdio.h>
int main()
{
	int i,j,temp,flag,n;
	int arr[100];
	printf("enter how many elements you wat:\n");
	scanf("%d",&n);
	printf("enter the elemets:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
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
	printf("after sorting the elemnts:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

