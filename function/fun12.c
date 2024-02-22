//write a c program to find age is above 18 & check eligible for voting or not voting using function
#include<stdio.h>
#include<conio.h>
#include<math.h>
int age(int a)
{
    if(a>=18)
    {
        printf("you are eligible for voting....!");
    }
    else
    {
        printf("you are not eligible for voting....!");
    }
}

int main()
{
 int a;
 printf("enter your age: ");
 scanf("%d",&a);
 age(a);
 return 0;
}