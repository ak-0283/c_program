//take input from user and do sum using function
#include<stdio.h>

int sum(int a[20],int i){
    int s = 0;
    for(i=0;i<10;i++){
        s=s+a[i];
    }
    return s;
}

int main(){
    int arr[20],i,total;
    printf("enter the numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    total = sum(arr,10);
    printf("sum is: %d",total);
    return 0;
} 