// Your code here...

#define MAX_VAL 1000
#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    
    int start = 0;
    int end = -1;

    int min = -MAX_VAL, max = MAX_VAL;

    if (!arr)
        return 0;
    while (j >= 0) {
        if (arr[i] >= min)
            min = arr[i];
        else
            end = i;

        if (arr[j] <= max)
            max = arr[j];
        else
            start = j;
        ++i;
        --j;
    }
    return end - start + 1;
}