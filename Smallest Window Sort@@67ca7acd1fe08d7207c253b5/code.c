// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    int compt = 0;

    if (!arr)
        return 0;
    for (int i = 0; i < end && arr[i] <= arr[i + 1]; i++)
        ++start;
    printf("start is: %d and end is %d\n", start, end);
    if (start == end)
        return 0;
    for (int j = end; j > start && arr[j] >= arr[j - 1]; j--) {
        --end;
    }
    printf("end is: %d\n", end);
    return end - start + 1;
}