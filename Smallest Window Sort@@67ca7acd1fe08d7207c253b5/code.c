// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    if (!arr)
        return 0;
    int compt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1]) {
            ++compt;
        }
    }
    return compt;
}