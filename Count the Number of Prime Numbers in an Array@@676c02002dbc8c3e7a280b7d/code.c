// Your code here...

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n/ 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i]))
            ++count;
    }
    printf("%d", count);
    return 0;
}