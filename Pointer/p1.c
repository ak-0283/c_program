//write a c program to find the address,value of a program

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int a=10;
 int *p=&a;
 printf("a: %d\n",a);
 printf("a: %d\n",p);
 printf("a: %d\n",*p);
 printf("a: %d\n",&p);
 return 0;
}