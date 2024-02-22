//write a c program to find odd or even
#include<stdio.h>
#include<conio.h>
#include<math.h>

int check(int b)
{
    if(b%2==0)
    {
        printf("Even: %d",b);
    }
    else
    {
        printf("Odd: %d",b);
    }
}

int main()
{
 int a;
 printf("enter the number: ");
 scanf("%d",&a);
 check(a);
 return 0;
}