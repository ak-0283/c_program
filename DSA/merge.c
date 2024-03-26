//merge sort without using function

#include <stdio.h>
#include<conio.h>
#include<math.h>
#define size 100

void main()
{
    int arr[size], i, n;
    printf("enter the no. of elements: ");
    scanf("%d", &n);
    printf("enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int beg = 0, end = n - 1;
    int mid,j,temp[size],index,k;
    while (beg < end)
    {
        mid = (beg + end) / 2;
        int i = beg;
        j = mid + 1;
        index = beg;
        while ((i <= mid) && (j <= end))
        {
            if (arr[i] < arr[j])
            {
                temp[index] = arr[i];
                i++;
            }
            else
            {
                temp[index] = arr[j];
                j++;
            }
            index++;
        }
        if (i > mid)
        {
            while (j <= end)
            {
                temp[index] = arr[j];
                j++;
                index++;
            }
        }
        else
        {
            while (i <= mid)
            {
                temp[index] = arr[i];
                i++;
                index++;
            }
        }
        for (k = beg; k < index; k++)
        {
            arr[k] = temp[k];
        }
    }


    printf("the sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}