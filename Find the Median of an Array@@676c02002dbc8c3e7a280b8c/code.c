// Your code here...

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int idx = i - 1;
        while (idx >= 0 && temp < arr[idx]) {
            swap(&arr[idx + 1], &arr[idx]);
            --idx;
        }
        arr[idx + 1] = temp;
    }
}

void selectionSort(int *arr, int n)
{
    for (int i = 1; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[idx] > arr[j])
                idx = j;
        }
        if (idx != i)
            swap(&arr[idx], &arr[i]);
    }
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    if (n % 2 == 0) {
        printf("%d", (arr[n / 2 - 1] + arr[n / 2]) / 2);
    } else {
        printf("%d", arr[n / 2]);
    }
    return 0;
}