//quick sort without using function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int a[100],
 beg,end,loc;
 int left=beg,right=end,loc=beg,flag=0;
 int i,n;
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter the elements: ");
 for ( i = 0; i < n; i++)
 {
   scanf("%d",&a[i]);
 }
 while (a[loc]<=a[right] && loc!=right)
 {
  right=right-1; 
 }

 if(loc=right)
 {
   flag=1;
 }
 else if(a[loc]>a[right])
 {
   a[loc]=a[right];
   loc=right;
 }
 if(flag=0)
 {
   while (a[loc]>=a[right] && loc != left)
   {
      left=left+1;
   }
   if(loc=left)
   {
      flag=1;
   }
   else if(a[loc]<a[left])
   {
      a[loc]=a[left];
      loc=left;
   }
 }

 printf("the sorted array is: ");
 for ( i = 0; i < n; i++)
 {
   printf("%d",a[i]);
 }
 
 return 0;
}