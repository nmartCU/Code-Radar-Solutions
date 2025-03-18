// Your code here...

#include <stdbool.h>


bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++) {
        printf("n is %d and i is %d and res is %d\n", n, i, n % i);
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrimesInRange(int a, int b)
{
    for (int i = a; i <= b; i++) {
        printf("a is %d b is %d and index is %d\n", a, b, i);
        if (isPrime(i)) {
            //printf("%d ", i);
        }
    }
}