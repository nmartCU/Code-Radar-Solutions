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
            for (int j = i + 1; j < n; j++) {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}