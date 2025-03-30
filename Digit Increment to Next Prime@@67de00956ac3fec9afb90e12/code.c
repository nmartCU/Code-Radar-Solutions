// Your code here...

#include <stdbool.h>

int countDigits(int n)
{
    int digits = 0;

    while (n > 0) {
        n /= 10;
        ++digits;
    }
    return digits;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int untilPrime(int n)
{
    if (n <= 7) {
        while (!isPrime(n))
            ++n;
        return n;
    }
    return 2;
}

int incrementToPrimeDigits(int n)
{
    int digits = countDigits(n);

    int arr[digits];
    int res[digits];

    int temp = n;

    for (int i = 0; i < digits; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    printf("\n");
    
    for (int i = digits - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = digits - 1; i >= 0; i--) {
        res[i] = untilPrime(arr[i]);
    }
    int result = 0;
    for (int i = digits - 1; i >= 0; i--) {
        result = result * 10 + res[i];
    }
    return result;
}