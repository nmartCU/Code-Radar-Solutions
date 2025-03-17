// Your code here...

#include <stdio.h>
#include <stdbool.h>

int findUnsortedSubarray(int *arr, int n)
{
    if (!arr)
        return 0;
    int start = 0;
    bool find = false;
    for (int i = 0; i < n - 1 && arr[i] > arr[i + 1]; i++) {
        ++start;
    }
    return compt;
}