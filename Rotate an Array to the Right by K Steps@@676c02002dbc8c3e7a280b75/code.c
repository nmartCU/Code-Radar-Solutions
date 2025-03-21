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
    int k = 0;
    int temp = 0;
    int end = 0;


    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    end = n - 1;
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        for (int i = end; i > 0; i--) {
            swap(&arr[i], &arr[i - 1]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}