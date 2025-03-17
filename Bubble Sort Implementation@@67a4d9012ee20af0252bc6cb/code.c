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

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[i] > arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j] = temp;
            }
        }
    }
}