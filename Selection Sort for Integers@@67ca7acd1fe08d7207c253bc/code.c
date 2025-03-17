// Your code here...

#include <stdio.h>

void printArray(int *arr, int n)
{
    if (!arr)
        return;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[idx])
                idx = j;
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[index] = temp;
    }
}