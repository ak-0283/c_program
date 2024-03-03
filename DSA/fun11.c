//merge sort without using function

#include <stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n, i, j, temp, mid, low = 0,arr[50];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    while (low < n) 
    {
        mid = (low + n) / 2;

        for (i = low, j = mid + 1; i <= mid && j < n; ) 
        {
            if (arr[i] <= arr[j]) 
            {
                i++;
            } 
            else 
            {
                temp = arr[j];
                for (int k = j; k > i; k--) 
                {
                    arr[k] = arr[k - 1];
                }
                arr[i] = temp;
                i++;
                j++;
                mid++;
            }
        }
        low = n;
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}