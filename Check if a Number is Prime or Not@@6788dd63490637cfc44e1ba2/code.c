// Your code here...
#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

bool isPrime(int a, int i)
{
    if (a <= 1)
        return false;
    if (i == 1)
        return true;
    if (a % i == 0)
        return false;
    return isPrime(a, i - 1);
}

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d", &a)) != 1)
        return ERROR;
    if ((printf("%s\n", ((isPrime(a, a / 2))) ? "Prime" : "Not Prime")) < 0)
        return ERROR;
    return SUCCESS;
}