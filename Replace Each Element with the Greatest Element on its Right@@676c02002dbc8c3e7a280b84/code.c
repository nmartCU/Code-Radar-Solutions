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
        int temp = arr[i];
        max = findMax(arr, n, i + 1);
        // 16. 17 4 3 5
        // temp = 16 max = 17
        // loop replace evert element
        //   16 17 4 3 5 => replace 16 (i) avec 17 (max) => 17 17 4 3 5
        // temp = 17 max = 5
        // loop to replace every element
        //   17 17 4 3 5 => replace 17 (i) avec 5 (max) => 17 5 5 
        for (int j = i; j >= i; j--) {
            arr[j] = max;
        }
    }
    arr[n - 1] = -1;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}