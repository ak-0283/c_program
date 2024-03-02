//bubble sort without using function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,j,n,temp,a[100],flag;
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter the elements: ");
 for ( i = 0; i < n; i++)
 {
    scanf("%d",&a[i]);
 }

 for ( i = 0; i < n-1; i++)
 {
   flag=0;
   for ( j = 0; j < n-1-i; j++)
   {
      if (a[j]>a[j+1])
      {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         flag=1;
      }   
   }
   if(flag==0)
   break;
 }

printf("sorted array: ");
for ( i = 0; i < n;i++)
{
   printf("%d \n",a[i]);
}

 return 0;
}