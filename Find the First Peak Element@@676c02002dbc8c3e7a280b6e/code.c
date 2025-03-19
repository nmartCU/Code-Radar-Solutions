// Your code here...
#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int first = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
        }
    }
}