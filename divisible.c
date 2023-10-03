#include<stdio.h>
main ()
{
    int i=1,j=100;
    for(    ;i<=j;i++)
    {
        if(i%5==0 && i%10==0)
        printf("\n %d",i);
    }
}