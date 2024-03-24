//write a c program to perform addition of two matrices

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int a[100][100],b[100][100],c[100][100];
 int i,j,rows,cols;

 printf("enter the size of rows: ");
 scanf("%d",&rows);
 printf("enter the size of column: ");
 scanf("%d",&cols);

 printf("enter the first matrix elements: ");
 for ( i = 0; i < rows; i++)
 {
    for ( j = 0; j < cols; j++)
    {
        scanf("%d",&a[i][j]);
    } 
 }

 printf("enter the second matrix elements: ");
 for ( i = 0; i < rows; i++)
 {
    for(j=0;j<cols;j++)
    {
        scanf("%d",&b[i][j]);
    }
 }
 
 for ( i = 0; i < rows; i++)
 {
    for(j=0;j<cols;j++)
    {
        c[i][j] = a[i][j] + b[i][j];
    }
 }
 printf("sum of 2 matrix: ");
 for ( i = 0; i < rows; i++)
 {
    for(j=0;j<cols;j++)
    {
        printf("%d ",c[i][j]);
    }
 }
 
 return 0;
}
