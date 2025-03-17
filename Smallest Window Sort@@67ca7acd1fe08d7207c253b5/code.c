// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    int end = 0;
    int compt = 0;

    if (!arr)
        return 0;
    for (int i = 0; i < n - 1 && arr[i] > arr[i + 1]; i++)
        ++start;
    while (end > 0 && arr[end] >= arr[end - 1]) {
        --end;
    }
    printf("start is: %d end is: %d\n", start, end);
    return compt;
}