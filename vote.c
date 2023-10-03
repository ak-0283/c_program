#include<stdio.h>
main ()
{
    int a;
    printf("Enter age: ");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("You are eligible for vothing");
    }
    else
    {
        printf("You are not eligible for voting");
    }
}