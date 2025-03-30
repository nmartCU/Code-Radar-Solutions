// Your code here...

int countDigits(int n)
{
    int digits = 0;
    int temp = n;

    while (temp > 0) {
        temp /= 10;
        ++digits;
    }
    return digits;
}

int *createArray(int n)
{
    int digits = countDigits(n);
    int temp = n;

    int arr[digits];
    for (int i = 0; i < digits; i++) {
        int v = temp % 10;
        arr[i] = v;
        temp /= 10;
    }
    return arr;
}

int mountainPeak(int n)
{
    int *arr = createArray(n);
    printf("nbr digit = %d\n ", digits);
    return n;
}