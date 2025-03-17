// Your code here...

#include <stdio.h>
#include <stdbool.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    bool find = false;

    if (!arr)
        return 0;
    for (int i = 0; i < n - 1 && arr[i] > arr[i + 1]; i++)
        ++start;
    if (start == n - 1)
        return 0;
    while (end > 0 && arr[end] >= arr[end - 1]) {
        --end;
    }
    return end - start;
}