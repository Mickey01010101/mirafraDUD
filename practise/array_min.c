/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5];
    int i,j,min,temp;
    printf("enter the array elements\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("enter the min");
    scanf("%d",&min);
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("after sorting elements");
    for(i=0;i<min;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}

