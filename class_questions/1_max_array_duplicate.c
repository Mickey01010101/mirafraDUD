
/*

input:

int arr[7]={4,5,3,2,1,9,6}

output=5,9

*/



#include<stdio.h>
int main()
{
	int arr[100]={4,5,3,2,1,9,6};
	int i,max=0,n=7;
	int a[7];

	max=arr[0];
	a[0]=max;
	printf("each adjucent elements comparing after biggets values\n");
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		printf("%d\t",max);
		a[i]=max;
	}
	printf("\n");
	printf("biggest values after removing duplicate values\n");

	for(i=1;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			printf("%d\t",a[i]);
		}
	}
}


