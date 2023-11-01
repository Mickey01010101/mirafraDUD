/*

Given a binary array, sort it in linear time and constant space. The output should print all zeroes, followed by all ones.

For example,

Input:  { 1, 0, 1, 0, 1, 0, 0, 1 }
 
Output: { 0, 0, 0, 0, 1, 1, 1, 1 }

*/


#include<stdio.h>
int count1=0,count=0;
int i;
void function(int arr[],int n);
int main()
{
    int arr[]={ 1, 0, 1, 0, 1, 0, 0, 1 };
    int n=sizeof(arr) / sizeof(arr[0]);
    function(arr,n);
}

void function(int arr[],int n)
{
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
        else if(arr[i]==1)
        {
            count1++;
        }
    }
    
    for(i=0;i<count;i++)
    {
        printf("0\t");
    }
    for(i=n;i>count;i--)
    {
        printf("1\t");
    }
}
