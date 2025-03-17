// Your code here...
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

void printArray(char **arr, int n)
{
    if (!arr)
        return;
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}

void selectionSort(char arr[][MAX_LEN], int n)
{
    for (int i = 0; i < n; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[idx], arr[j]) > 0) {
                idx = j;
            }
        }
        if (idx != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[idx]);
            strcpy(arr[i + 1], temp);
        }

    }
}