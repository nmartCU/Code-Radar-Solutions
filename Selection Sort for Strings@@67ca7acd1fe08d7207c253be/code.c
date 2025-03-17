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
    char min[MAX_LEN];

    for (int i = 0; i < n; i++) {
        int idx = i;
        strcpy(min, arr[idx]);
        for (int j = i + 1; j < n; j++) {
            if (strcmp(min, arr[j]) > 0) {
                strcpy(min, arr[j]);
                idx = j;
            }
        }
        if (idx != i) {
            char temp[MAX_LEN];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[idx]);
            strcpy(arr[i + 1], temp);
        }

    }
}