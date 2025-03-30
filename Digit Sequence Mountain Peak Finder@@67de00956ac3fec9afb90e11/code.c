// Your code here...
#include <stdlib.h>
#include <stdbool.h>

int countDigits(int n)
{
    int digits = 0;
    int temp = n;

    while (temp > 0) {
        temp /= 10;
        ++digits;
    }
    return digits;
}

int mountainPeak(int n)
{
    int digits = countDigits(n);
    int temp = n;
    int arr[digits];

    for (int i = 0; i < digits; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }
    
    if (digits % 2 == 0)
        return -1;
    int mid = digits / 2;

    int i = mid - 1, j = mid + 1;

    for (int idx = 0; idx < mid; idx++) {
        bool desc = arr[mid] == arr[i] - idx - 1;
        printf("%d\n", desc);
        if (arr[i] != arr[j] || arr[mid] == arr[i] - idx - 1 )
            return -1;
        i--;
        j++;
    }
    return arr[mid];
}