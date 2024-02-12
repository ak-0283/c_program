//input some no and find the sum of the given numbers
#include<stdio.h>
int main(){
    int a[50],i,count,sum=0,n;
    printf("enter the size of array elements: ");
    scanf("%d",&n);
    printf("enter the arrary elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("sum is : %d",sum);
    
    return 0;
}