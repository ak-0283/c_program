//with argument no return type

#include<stdio.h>
#include<conio.h>
#include<math.h>

void fun(int a,int b){
 int s = 0;
 s = a + b;
 printf("sum = %d",s);
}

int main()
{
 int x,y;
 printf("enter the two no.: ");
 scanf("%d %d",&x,&y);
 fun(x,y);
 return 0;
}