// Your code here...

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = n - 1; j > 0 && arr[j] != 0; j++) {
                swap(&arr[j], &arr[j - 1]);
            }
        }
    }

    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}