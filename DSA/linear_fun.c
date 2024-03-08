// linear search using function

#include<stdio.h>
#include<conio.h>
#include<math.h>

int linear(int a[],int n,int s){
 for (int i = 0; i < n; i++)
 {
   if(a[i]==s)
   {
      printf("the element %d is present at location %d",s,i);
      break;
   }
   else if(a[i]==n)
   {
      printf("the element is not present");
      break;
   }
 }
}

int main()
{
 int i,s,n,a[100];
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter array elements: ");
 for ( i = 0; i < n; i++)
 {
   scanf("%d",&a[i]);
 }
 printf("array elements: ");
 for ( i = 0; i < n; i++)
 {
   printf("%d \n",a[i]);
 }
 printf("enter the element to search: \n");
 scanf("%d",&s);
 int res = linear(a,n,s);
 return 0;
}