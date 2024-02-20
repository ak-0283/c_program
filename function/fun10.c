//using passing and array as a argument using function
//find add of two number
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int a,int b){
    int c = a+b;
    printf("sum of two number: %d",c);
    return c;
}
int main()
{
 int a,b;
 printf("enter the first number: ");
 scanf("%d",&a);
 printf("enter the second number: ");
 scanf("%d",&b);
 sum(a,b);
 return 0;
}