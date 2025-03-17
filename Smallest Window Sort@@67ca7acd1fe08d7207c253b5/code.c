// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    if (!arr)
        return 0;
    int compt = 0;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                ++compt;
        break;
    }
    return compt;
}