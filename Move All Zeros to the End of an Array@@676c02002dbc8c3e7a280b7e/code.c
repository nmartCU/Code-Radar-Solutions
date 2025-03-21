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
    int index = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            arr[idx++] = arr[i];
    }

    for (int i = idx; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}