// Your code here..

int countDigits(int n)
{
    int count = 0;

    while (n > 0) {
        n /= 10;
        ++count;
    }
    return count;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int digitRightShift(int n)
{
    int digits = countDigits(n);

    if (digits == 1)
        return n;

    int arr[digits];
    int temp = n;

    for (int i = digits - 1; i >= 0; i--) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    for (int i = digits - 1; i > 0; i--) {
        swap(&arr[i], &arr[i - 1]);
    }
    int result = 0;

    for (int i = 0; i < digits; i++) {
        result = result * 10 + arr[i];
    }
    return result;
}