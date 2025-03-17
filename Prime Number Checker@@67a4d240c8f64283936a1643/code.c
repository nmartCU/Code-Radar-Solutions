// Your code here...

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i < num / 2; i++) {
        if ((num % i) == 0)
            return false;
    }
    return true;
}