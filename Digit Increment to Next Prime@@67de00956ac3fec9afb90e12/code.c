// Your code here...

#include <stdbool.h>

int countDigits(int n)
{
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        temp /= 10;
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
    int temp = n;

    while (isPrime(temp)) {
        printf("isprime %d\n", temp);
        if (temp > 7)
            return 2;
        temp++;
    }
    return temp;
}

int incrementToPrimeDigits(int n)
{
    int digits = countDigits(n);

    int arr[digits];
    int res[digits];

    int temp = n;

    for (int i = 0; i < digits; i++) {
        printf("Value is %d\n", temp % 10);
        arr[i] = temp % 10;
        temp /= 10;
    }
    printf("\n");
    for (int i = 0; i < digits; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < digits; i++) {
        printf("INside %d\n", arr[i]);
        res[i] = untilPrime(arr[i]);
    }
    for (int i = 0; i < digits; i++) {
        printf("%d", res[i]);
    }
    return n;
}