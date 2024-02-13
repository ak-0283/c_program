// no argument with return type

#include<stdio.h>

int sum()
{
    int a,b,sum;
    printf("enter the 2 number: ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    return sum;
}
int sub()
{
    int a,b,sub;
    printf("enter the 2 number: ");
    scanf("%d %d",&a,&b);
    sub = a-b;
    return sub;
}
int mul()
{
    int a,b,mul;
    printf("enter the 2 number: ");
    scanf("%d %d",&a,&b);
    mul = a*b;
    return mul;
}
int div()
{
    int a,b,div;
    printf("enter the 2 number: ");
    scanf("%d %d",&a,&b);
    div = a/b;
    return div;
}

int main()
{   
 int a,b,c,d; 
 a = sum();
 b = sub();
 c = mul();
 d = div();
 printf("sum is: %d \n sub is: %d\n mul is: %d\n div is: %d",a,b,c,d);
 return 0;
}