// Your code here...

#include <stdio.h>
#include <stdbool.h>

bool isSorted(int *arr, int n)
{
    for (int i = 1; i <= n; i++) {
        if (arr[i] < arr[i - 1])
            return false; 
    }
    return true;
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[i] > arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j] = temp;
            }
        }
    }
}