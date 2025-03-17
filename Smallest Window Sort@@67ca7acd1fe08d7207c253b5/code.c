// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    int compt = 0;

    if (!arr)
        return 0;
    for (int i = 0; i < n - 1 && arr[i] > arr[i + 1]; i++)
        ++start;
    for (int j = start; j < n - 1; j++) {
        if (arr[j] > arr[j + 1])
            ++compt;
    }
    return compt;
}