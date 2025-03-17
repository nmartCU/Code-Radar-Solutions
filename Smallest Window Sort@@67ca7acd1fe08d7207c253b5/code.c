// Your code here...

#define MAX_VAL 1000
#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    int end = -1;

    int i = 0;
    int j = n - 1;
    int compt = 0;
    int min = MAX_VAL, max = -MAX_VAL;

    if (!arr)
        return 0;
    while (j >= 0) {
        if (arr[i] >= min)
            min = arr[start];
        else
            end = i;

        if (arr[j] <= max)
            max = arr[end];
        else
            start = j;
        ++i;
        --j;
    }
    return end - start + 1;
}