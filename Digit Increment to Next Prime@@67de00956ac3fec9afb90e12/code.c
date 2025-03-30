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
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int untilPrime(int n)
{

}

int incrementToPrimeDigits(int n)
{
    int digits = countDigits(n);

    int arr[n];

    int temp = n;

    for (int i = 0; i < digits; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < digits; i++) {
        int count = untilPrime(arr[i]);
    }
    return n;
}