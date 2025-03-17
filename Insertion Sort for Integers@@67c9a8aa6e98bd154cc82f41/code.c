// Your code here...
// Your code here...

#include <stdio.h>
#include <stdbool.h>

void printArray(int *arr, int n)
{
    if (!arr)
        return;
    for (int i =0; i < n; i++)
        printf("%d ", arr[i]);
}

void insertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++) {
        int temp = arr[i + 1];
        int idx = i;
        while (idx >= 0 && temp < arr[idx]) {
            int temp = arr[idx];
            arr[idx] = arr[idx + 1]
            arr[idx + 1] = temp;
            --idx;
        }
    }
}