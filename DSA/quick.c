//quick sort without using function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int left,beg,right,end,loc,flag=0,a[50],i,n;
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter the elements: ");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 
 left=beg;
 right=end;
 loc=beg;
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
   while (a[loc]>=a[left] && loc!=left)
   {
      left=left+1;
   }
   if(loc=left)
   {
      flag=1;
   }
   else if(a[loc]<a[right])
   {
      a[loc]=a[left];
   }
}

 printf("sorted array: ");
 for(i=0;i<n;i++)
 {
   printf("%d",a[i]);
 }

 return 0;
}