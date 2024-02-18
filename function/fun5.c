//function with argument and with return type
#include<stdio.h>
#include<conio.h>
#include<math.h>

int sum(int a,int b){
 int sum = 0;
 sum = a+b;
 return sum;
}

int main()
{
 int x,y,s;
 printf("enter 2 no.: ");
 scanf("%d %d",&x,&y);
 s=sum(x,y);
 printf("sum is %d",s);
 return 0;
}