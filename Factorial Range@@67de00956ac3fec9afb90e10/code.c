// Your code here...

void factorial(int n)
{
    int result = 1;
    if (n == 0) {
        printf("1\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d\n", result);
}

void factorialRange(int start, int end)
{
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        factorial(i);
    }
}