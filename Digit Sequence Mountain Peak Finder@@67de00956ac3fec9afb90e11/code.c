// Your code here...
#include <stdlib.h>

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
    for (int i = 0; i < digits; i++) {
        printf("%d ", arr[i]);
    }
    return n;
}