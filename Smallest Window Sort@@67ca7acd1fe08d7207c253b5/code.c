// Your code here...

#include <stdio.h>
#include <stdbool.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    bool find = false;
    int compt = 0;

    if (!arr || n == 1)
        return compt;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            compt++;
        }
    }
    return compt;
}