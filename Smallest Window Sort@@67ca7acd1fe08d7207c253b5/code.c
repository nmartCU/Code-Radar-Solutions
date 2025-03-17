// Your code here...

#include <stdio.h>

int findUnsortedSubarray(int *arr, int n)
{
    if (!arr)
        return 0;
    int compt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > arr[n - 1]) {
                ++compt;
            }
            compt = n - i - 1;
            break;
        }
    }
    return compt;
}