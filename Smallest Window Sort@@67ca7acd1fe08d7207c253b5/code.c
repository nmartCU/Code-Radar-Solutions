// Your code here...

#include <stdio.h>
#include <stdbool.h>

int findUnsortedSubarray(int *arr, int n)
{
    int start = 0;
    bool find = false;
    int compt = 0:

    if (!arr)
        return compt;
    for (int i = 0; i < n - 1 && arr[i] > arr[i + 1]; i++)
        ++start;
    if (start == n - 1)
        return compt;
    for (int j = start; j < n - 1; j++) {
        if (arr[j] > arr[j + 1])
            ++compt;
    }
    return compt;
}