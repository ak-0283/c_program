//write a c program to find greatest of 3 number using function
#include<stdio.h>
#include<conio.h>
#include<math.h>

int check(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("the greatest number: %d",a);
    }
    else if(b>a && b>c)
    {
         printf("the greatest number: %d",b);
    }
    else
    {
         printf("the greatest number: %d",c);
    }
}

int main()
{
 int a,b,c;
 printf("enter the first number: ");
 scanf("%d",&a);
 printf("enter the second number: ");
 scanf("%d",&b);
 printf("enter the third number: ");
 scanf("%d",&c);
 check(a,b,c);
 return 0;
}