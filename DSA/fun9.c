//selection sort without using function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,j,a[100],n,min,temp;
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter the elements: ");
 for ( i = 0; i < n; i++)
 {
    scanf("%d",&a[i]);
 }
 for ( i = 0; i < n-1; i++)
 {
    min=i;
    for ( j = i+1; j < n; j++)
    {
        if(a[j]<a[min])
        min=j;
    }
    if(min != i)
    {
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
    }
 }
 printf("selection sort: ");
 for ( i = 0; i < n; i++)
 {
    printf("%d \n",a[i]);
 }
 return 0;
}