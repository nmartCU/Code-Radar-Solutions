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
    
    int mid = digits / 2 + 1;
    printf("mid = %d\n", mid);
    return n;
}