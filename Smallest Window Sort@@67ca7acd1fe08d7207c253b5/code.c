// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    int compt = 0;

    if (!arr)
        return 0;
    for (int i = 0; i < end; i++) {
        if (arr[i] < arr[i + 1])
            ++start;
    }
    for (int j = end; j > 0; j++) {
        if (arr[end] >= arr[end - 1])
            --end;
    }
    printf("start is: %d end is: %d\n", start, end);
    return compt;
}