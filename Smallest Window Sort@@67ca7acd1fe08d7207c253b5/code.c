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
        printf("Compt %d < %d\n", arr[i], arr[i + 1]);
        if (arr[i] < arr[i + 1])
            ++start;
    }
    printf("start is: %d", start);
    for (int j = end; j > 0; j--) {
        if (arr[j] >= arr[j - 1])
            --end;
    }
    printf("end is: %d\n", end);
    return compt;
}