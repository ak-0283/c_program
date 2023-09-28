#include<stdio.h>
void main()
{
    int i=0,j;
    printf("Enter the range: ");
    scanf("%d",&j);
    while (i<=j)
    {
        if(i%3==0 && i%5==0)
        printf("\n %d",i);
        i++;
    }
    return 0;
}
