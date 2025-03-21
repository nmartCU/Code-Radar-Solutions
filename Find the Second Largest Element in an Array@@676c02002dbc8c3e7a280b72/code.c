// Your code here...
#include <stdio.h>

int main()
{
    int n = 0;
    int prev = -1;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            prev = max;
            max = arr[i];
        } else if (max > arr[i] && (arr[i] > prev || prev == -1))
            prev = arr[i];
    }
    printf("%d ", prev);
}