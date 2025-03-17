// Your code here...

#include <stdio.h>

int findUnsortedSubArray(int *arr, int n)
{
    if (!arr)
        return 0;
    int compt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            ++compt;
    }
    return compt;
}