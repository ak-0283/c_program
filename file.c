// write a c program in c to search an element  by using linear search

#include<stdio.h>
int main()
{   
    int arr[100],s,c,number;
    printf("enter the no. of elements in array: ");
    scanf("%d",&number);
    printf("enter %d number: ",number);
    for ( c = 0; c < number; c++)
    {
        scanf("%d",&arr[c]);
    }
    printf("enter the no. to search: ");
    scanf("%d",&s);
    for(c=0;c<number;c++)
    if(arr[c]==s)
    {
        printf("%d is present at location %d",s,c=c+1);
        break;
    }
    else if(c==number)
    {
        printf("%d is not present in the array",s);
    }
    return 0;
}