//insertion sort without using function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,n,temp,j,a[100];
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter the elements: ");
 for ( i = 0; i < n; i++)
 {
    scanf("%d",&a[i]);
 }
 for ( i = 1; i < n; i++)
 {
    temp=a[i];
    j=i-1;
    while (j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
 }
 printf("sorted array: ");
 for ( i = 0; i < n; i++)
 {
    printf("%d \n",a[i]);
 }
 return 0;
}