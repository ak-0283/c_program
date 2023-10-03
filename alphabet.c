#include<stdio.h>
main()
{
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("it is alphabet character");
    }
    else if(a>='0' && a<='9')
    {
        printf("it is digit");
    }
    else if(a>='!' && a<='*')
    printf("it is a special character");
}