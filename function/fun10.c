//passing and  as a argument using function
//find add of two number
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int a,int b){//formal parameter
    int c = a+b;
    //printf("sum of two number: %d",c);
    return c;
}
int main()
{
 int a,b;
 printf("enter the first number: ");
 scanf("%d",&a);
 printf("enter the second number: ");
 scanf("%d",&b);
 int c = sum(a,b);
 //where as sum(2,4) this are call actual parameter
 printf("sum of two numbers: %d",c);
 return 0;
}