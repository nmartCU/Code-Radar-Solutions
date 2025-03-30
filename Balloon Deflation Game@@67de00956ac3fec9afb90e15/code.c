// Your code here...
#include <limits.h>
#include <stdbool.h>

int findMin(int air[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
        if (air[i] > 0 && air[i] < min)
            min = air[i];

    return min == INT_MAX ? 0 : min;
}

bool isEmpty(int air[], int n)
{
    for (int i = 0; i < n; i++) {
        if (air[i] > 0)
            return false;
    }
    return true;
}

int release(int air[], int n, int min)
{
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (air[i] > 0) {
            ++count;
            air[i] -= min;
        }
    }
    return count;
}

void deflateBalloons(int air[], int n)
{
    int temp = n;

    while (!isEmpty(air, n)) {
        int min = findMin(air, n);
        int count = release(air, n, min);
        if (!isEmpty(air, n) && findMin(air, n) == 0)
            printf("%d", n);
        else
            printf("%d\n", count);
    }
}