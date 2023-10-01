#include<stdio.h>
main()
{
    int i,n;
    printf("enter the initial value: ");
    scanf("%d",&i);
    printf("enter the final value: ");
    scanf("%d",&n);
    for (   ;i<=n;i++)
    {
        if(i%2!=0)
        printf("\n %d",i);
    }
    
}