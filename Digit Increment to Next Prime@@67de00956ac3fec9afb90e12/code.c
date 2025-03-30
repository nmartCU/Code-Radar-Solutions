// Your code here...

int countDigits(int n)
{
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        temp /= 10;
        ++digits;
    }
    return digits;
}

int incrementToPrimeDigits(int n)
{
    printf("%d\n", countDigits(n));
}