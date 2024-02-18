//passing array as a argument

#include<stdio.h>
#include<conio.h>
#include<math.h>
int fun1(int arr[],int m)
{
    printf("elements present: ");
 for (int i = 0; i < m; i++)
 {
    printf("%d",arr[i]);
 }
}

int main()
{
 int a[100],n;
 printf("enter the size of array: ");
 scanf("%d",&n);
 for (int i = 0; i < n; i++)
 {
        scanf("%d",&a[i]);
 }
//  printf("elements present: ");
//  for (int i = 0; i < n; i++)
//  {
//     printf("%d",a[i]);
//  }
 fun1(a,n);
 return 0;
}