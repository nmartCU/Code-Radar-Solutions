// Your code here...

void factorialRange(int start, int end)
{
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }

    int result = start == 0 ? 1 : start;
    for (int i = start; i <= end; i++) {
        if (i == 0) {
            printf("1\n");
        } else {
            result *= i;
            printf("%d\n", result);
        }
    }
}