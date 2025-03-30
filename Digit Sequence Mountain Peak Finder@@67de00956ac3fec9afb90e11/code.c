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

    int *arr = malloc(sizeof(int) * digits);
    for (int i = 0; i < digits; i++) {
        int v = temp % 10;
        arr[i] = v;
        temp /= 10;
    }
    arr[digits] = '\0';
    return arr;
}

int mountainPeak(int n)
{
    int *arr = createArray(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return n;
}