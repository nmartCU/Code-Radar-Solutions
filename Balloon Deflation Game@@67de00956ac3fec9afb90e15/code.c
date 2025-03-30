// Your code here...

int findMin(int air[], int n)
{
    int min = air[0];
    for (int i = 1; i < n; i++)
        if (air[i] < min)
            min = air[i];
    if (min == 0)
        return -1;
    return min;
}

void deflateBalloons(int air[], int n)
{
    int min = findMin(air, n);
    printf("min = %d\n", min);
}