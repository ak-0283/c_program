#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    printf("Enter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1: printf("sum of %d and %d is: %d",a,b,a+b);
        break;
    case 2: printf("subtract of %d and %d is: %d",a,b,a-b);
        break;
    case 3: printf("multiply of %d and %d is: %d",a,b,a*b);
        break;
    case 4: printf("divide of %d and %d is: %d",a,b,a/b);
        break;
    default: printf("You have to enter 1: addition,2: subtraction,3: multiply,4: divison");
    }
}