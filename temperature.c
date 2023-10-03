#include<stdio.h>
main ()
{
    float c,f;
    printf("Enter the temperature: ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("\n Temperature in farenhit: %f",f);
}