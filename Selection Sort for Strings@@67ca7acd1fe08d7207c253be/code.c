// Your code here...
#include <stdio.h>
#include <string.h>

void printArray(char **arr, int n)
{
    if (!arr)
        return;
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}

void selectionSort(char **arr, int n)
{
    for (int i = 0; i < n; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[idx]) < 0) {
                char temp[100] = strcpy(arr[j]);
                arr[j] = strcpy(arr[j + 1]);
                arr[j + 1] = strcpy(temp);
            }
        }

    }
}