#include<stdio.h>
main()
{
    int i,j,k=0,l;
    printf("Enter the no of rows: \n");
    scanf("%d",&l);
    for(i=1;i<=l;i++,k=0)
    {
        for(j=1;j<=l-i;j++)
        {
            printf(" ");
        }
        while(k!=2*i-1){
            printf("*");
            k++;
        }
        printf("\n");
    }
}