//binary search without function

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int i,n,s,beg,end,mid,a[100];
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter array elements: ");
 for ( i = 0; i < n; i++)
 {
scanf("%d",&a[i]);
 }
 printf("enter the search elements: ");
 scanf("%d",&s);
 beg=0;
 end=n-1;
 while(beg<=end)
 {
   mid=(beg+end)/2;
    if(a[mid]==s)
    {
    printf("%d found at location %d\n",s,mid);
    break;
    }
    else if(a[mid]<s)
    {
        beg=mid+1;
    }
    else
    {
        end=mid-1;
    }
 }

 if(beg>end)
 {
    printf("the search element is not present");
 }
 return 0;
}