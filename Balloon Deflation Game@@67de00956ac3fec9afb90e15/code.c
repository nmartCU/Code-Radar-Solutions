// Your code here...

int findMin(int air[], int n)
{
    int min = 0;
    int pos = 0;

    for (int i = 0; i < n; i++)
        if (air[i] < min)
            min = air[i];
    if (min != 0)
        return min;
    return -1;
}

void deflateBalloons(int air[], int n)
{
    int min = findMin(air, n);
    printf("min = %d\n", min);
}