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

int shiftedNumber(int n)
{
    int digits = countDigits(n);

    int arr[digits];
    int temp = n;

    for (int i = digits - 1; i >= 0; i--) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < digits; i++) {
        printf("%d ", arr[i]);
    }
}