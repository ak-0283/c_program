#include<stdio.h>
main()
{
    float p,r,t,a,si,ci;
    printf("Enter the principle: ");
    scanf("%f",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter time");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple interest = %f",si);
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("\n Compound interest = %f",c);
}