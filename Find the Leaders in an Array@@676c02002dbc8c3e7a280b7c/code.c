// Your code here...

#include <stdio.h>

int findMax(int *arr, int n, int i)
{
    int max = arr[i];
    for (int j = i + 1; j < n; j++) {
        if (max <= arr[j])
            max = arr[j];
    }
    return max;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int temp[n];
    int idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }
    
    for (int i = 0; i < n - 1; i++) {
        int max = findMax(arr, n, i + 1);
        if (max >= arr[i]) {
            temp[idx] = max;
            ++idx;
        }
    }
    for (int i = 0; i < idx; i++) {
        printf("%d ", arr[idx]);
    }
    return 0;
}