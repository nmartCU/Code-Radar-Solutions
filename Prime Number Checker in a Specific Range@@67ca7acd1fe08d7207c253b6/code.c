// Your code here...

#include <stdbool.h>


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

void printPrimesInRange(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            ++count;
            printf("%d ", i);
        }
    }
    if (count == 0)
        printf("No prime numbers");
}