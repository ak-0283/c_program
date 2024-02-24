// linear search without function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int a[100],n,s;
 printf("enter the size of array: ");
 scanf("%d",&n);
 printf("enter the array elements: \n");
 for (int i = 0; i < n; i++)
 {
    scanf("%d",&a[i]);
 }
 printf("array elements is: ");
 for (int i = 0; i < n; i++)
 {
        printf("%d \n",a[i]);
    
 }
 printf("enter the search element: ");
 scanf("%d",&s);
 for (int i = 0; i < n; i++)
 {
    if (a[i]==s)        
    {
        printf("the elements is present %d at location %d",s,i);
        break;
    }
    else if(a[i]==n)
    {
    printf("the elements is not present");
    break;
    }
 }
 return 0;
}