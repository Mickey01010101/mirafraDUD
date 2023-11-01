#include<stdio.h>
void fun(int arr[]);
int target,j,i,n,count=0;
int main()
{
    int arr[5];
    printf("enter the array elements:\n");
    scanf("%d",&n);
    printf("enter the target\n");
    scanf("%d",&target);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr);
}

void fun(int arr[])
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i!=j)&&arr[i]+arr[j]==target)
            {
                printf("%d\t%d\n",arr[i],arr[j]);
              //  printf("target found:\n:");
            count++;
            }
        }
    }
if(count>0)
printf("target found:\n");
else
printf("not found:");
    
}
