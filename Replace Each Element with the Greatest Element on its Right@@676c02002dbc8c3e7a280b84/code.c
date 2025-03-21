// Your code here...

#include <stdio.h>

int findMax(int arr[], int n, int i)
{
    int max = arr[i];
    for (int j = i; j < n; j++) {
        if (max < arr[j]) {
            max = arr[j];
        }
    }
    return max;
}

int main()
{
    int n = 0;
    int max = 0;
    int val = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        arr[i] = findMax(arr, n, i + 1);
    }
    arr[n - 1] = -1;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}