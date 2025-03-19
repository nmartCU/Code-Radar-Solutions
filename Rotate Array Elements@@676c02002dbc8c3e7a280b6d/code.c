// Your code here...
#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 0;
    int k = 0;
    int j = 0;
    int end = n - 1;

    scanf("%d\n", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    scanf("%d\n", &k);
    for (int i = k; i > 0; i--) {
        swap(&arr[end], &arr[j]);
        --end;
        ++j;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}