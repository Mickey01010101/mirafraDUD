#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    int i,j,temp,x;
    printf("enetr elements of the array:\n");
   
    for(i=0;i<SIZE;i++)
    scanf("%d",&arr[i]);
     printf("enter min no");
     scanf("%d",&x);
    for(i=0;i<SIZE-1;i++)
    for(j=i+1;j<SIZE;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("sorted array is:\n");
    for(i=0;i<x;i++)
    {   
    printf("%d",arr[i]);
    printf("\n");
    }
}
