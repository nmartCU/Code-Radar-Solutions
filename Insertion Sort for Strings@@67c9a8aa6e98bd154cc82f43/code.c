// Your code here...

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void printArray(char arr[][MAX_LEN], int n)
{
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}

void insertionSort(char arr[][MAX_LEN], int n)
{
    char temp[MAX_LEN];

    for (int i = 1; i < n - 1; i++) {
        int idx = i - 1;
        strcpy(temp, arr[i]);
        while (idx >= 0 && strcmp(temp, arr[idx]) < 0) {
            strcpy(arr[idx + 1], arr[idx]);
            --idx;
        }
        strcpy(arr[i + 1], temp);
    }
}