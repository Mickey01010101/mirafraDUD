#include<stdlib.h>
#include<stdio.h>
 int arr[100];
    int n;
    int choice=0;
    int top=-1;
    int i;
    
    void push();
    void pop();
    void display();
    
int main()
{
    printf("enter the how many values u want:\n");
    scanf("%d",&n);
    
    while(choice!=4)
    {
        printf("choose the below choices \n");
        printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    {
                    push();
                    break;
                    }
            case 2: {
                    pop();
                    break;
                    }
            case 3:{
                    display();
                    break;
                    }
            case 4:
                    printf("thank you\n");
                    exit(0);
            defualt:printf("please enter the valid choice only:\n");
        }
    }
}


void push()
{
    int val;
    if(top==(n-1))
    printf("stack is full\n");
    else
    {
        printf("enter the value:\n");
        scanf("%d",&val);
        top=top+1;
        arr[top]=val;
    }
}

  void pop()
{
    if(top==-1)
    printf("stack is empty:\n");
    else
    top=top-1;
}

void display()
{
     if(top==(n-1))
    {
        printf("stack is full:\n");
    }
    for(i=top;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    if(top==-1)
    {
        printf("stack is empty:\n");
    }
   
}
