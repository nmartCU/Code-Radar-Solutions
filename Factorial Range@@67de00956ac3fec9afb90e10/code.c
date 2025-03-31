// Your code here...

void factorialRange(int start, int end)
{
    int result = 1;

    for (int i = start; i <= end; i++) {
        if (i == 0) {
            printf("1\n");
        } else {
            result *= i;
            printf("%d\n", result);
        }
    }
}