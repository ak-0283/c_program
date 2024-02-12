//input some display and the numbers
#include<stdio.h>
int main()
{
    int a[50],i,n,dis;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    }
    
    return 0;
}