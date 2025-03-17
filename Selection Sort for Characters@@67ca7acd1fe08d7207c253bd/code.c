// Your code here...

#include <stdio.h>

void printArray(char *arr, int n)
{
    if (!arr)
        return;
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(char *arr, int n)
{
    for (int i = 0; i < n; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[idx])
                idx = j;
        }
        swap(&arr[i], &arr[idx]);
    }
}