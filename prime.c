#include<stdio.h>
main()
{
    int a,i,c=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
}