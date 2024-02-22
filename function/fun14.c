//write a c program to find area of triangle using function
#include<stdio.h>
#include<conio.h>
#include<math.h>

int tri(float b,float h)
{
    float c = 0.5;
    float result=c*b*h;
    printf("area of triangle: %f",result);
    return result;
}

int main()
{
 float b,h;
 printf("enter the base: ");
 scanf("%f",&b);
 printf("enter the height: ");
 scanf("%d",&h);
 tri(b,h);
 return 0;
}