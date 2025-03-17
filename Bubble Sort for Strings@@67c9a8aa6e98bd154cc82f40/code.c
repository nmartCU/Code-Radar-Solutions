// Your code here...
// Your code here...

#include <stdio.h>
#define MAX_LEN 100

void printArray(char arr[][MAX_LEN], int n)
{
    if (!arr)
        return;
    for (int i =0; i < n; i++)
        printf("%s ", arr[i]);
}

void bubbleSort(char arr[][MAX_LEN], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char temp[MAX_LEN];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}