//check two numbers which is greater 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int check(int a,int b)
{
 if(a>b){
    printf("%d is greater number",a);
 }
 else {
    printf("%d is greater number",b);
 }
}
int main()
{
 int x,y,r;
 printf("enter two no: ");
 scanf("%d %d",&x,&y);
 r=check(x,y);
 return 0;
}