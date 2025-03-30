// Your code here...
#include <limits.h>
#include <stdbool.h>

int findMin(int air[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
        if (air[i] < min && air[i] != 0)
            min = air[i];

    return min == INT_MAX ? -1 : min;
}

bool isEmpty(int air[], int n)
{
    for (int i = 0; i < n; i++) {
        if (air[i] != 0)
            return false;
    }
    return true;
}

int release(int air[], int n, int min)
{
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (air[i] != 0) {
            int temp = air[i] - min;
            if (temp <= 0)
                air[i] = 0;
            else {
                air[i] = temp;
                ++count;
            }
        }
    }
    return count;
}

void deflateBalloons(int air[], int n)
{
    int min = 0;
    int count = 0;

    while (isEmpty(air, n)) {
        min = findMin(air, n);
        count = release(air, n, min);
        printf("%d\n", count);
    }
}