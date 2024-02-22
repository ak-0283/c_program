//using function find area of square
#include<stdio.h>
#include<conio.h>
#include<math.h>
int area(int a)
{
    int b = a*a;
    printf("area of square: %d",b);
    return b;
}

int main()
{
 int a;
 printf("enter the area: ");
 scanf("%d",&a);
 area(a);
 return 0;
}