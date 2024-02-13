//no argument no return type

#include<stdio.h>
void sum(){
    int a=1,b=8,sum;
    sum = a+b;
    printf("sum is: %d \n",sum);
}

void sub(){
    int a=5,b=1,sub;
    sub = a-b;
    printf("sub is: %d \n",sub);
}
void mul(){
    int a=5,b=9,mul;
    mul = a*b;
    printf("multiply is: %d \n",mul);
}
void div(){
    int a=45,b=9,div;
    div = a/b;
    printf("divide is: %d \n",div);
}

void main(){
    sum();
    sub();
    mul();
    div();
}