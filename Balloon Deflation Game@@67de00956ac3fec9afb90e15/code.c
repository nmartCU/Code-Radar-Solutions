// Your code here...
#include <limits.h>

int findMin(int air[], int n)
{
    int min = INT_MAX;
    
    for (int i = 0; i < n; i++)
        if (air[i] < min && air[i] != 0)
            min = air[i];

    return min == INT_MAX ? -1 : min;
}

void deflateBalloons(int air[], int n)
{
    int min = findMin(air, n);
    printf("min = %d\n", min);
}