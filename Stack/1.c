//stack using push,pop,peek operations

#include<stdio.h>
#include<stdlib.h>
#define size 100

int a[size];
int top = -1;

void push(int data)
{
    if(top == size-1)
    {
        printf("STACK OVERFLOW");
    }
    else
    {
        a[++top]=data;
        printf("pushed %d onto the stack",data);
    }
}

int pop()
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW");
    }
    int data = a[top--];
    printf("popped %d from the stack ",data);
    return data;
}

int peek()
{
    if(top == -1)
    {
        printf("stack is empty");
        return -1;
    }
    return a[top];
}

int main()
{
 int choice,data;
 while (1)
 {
    printf("\n stack operations: ");
    printf("\n press 1 for push operation");
    printf("\n press 2 for pop operation");
    printf("\n press 3 for peek operation");
    printf("\n press 4 for exit");

    printf("\n enter you choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\n enter data to push: ");
        scanf("%d",&data);
        push(data);
        break;
    case 2:
        data=pop();
        if(data != 1)
        {
            printf("\n popped element: %d",data);
        }
        break;
    case 3: 
        data=peek();
        if(data!=1)
        {
            printf("\n top element: %d",data);
        }
        break;
    case 4: 
        printf("\n exiting.....");
        return 0;
    default:
        printf("\n invalid choice");
        break;
    }
 }
 return 0;
}