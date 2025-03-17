// Your code here...

#include <stdio.h>

void printArray(int *arr, int n)
{
    if (!arr)
        return;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[idx])
                idx = j;
        swap(&arr[i], &arr[j]);
    }
}