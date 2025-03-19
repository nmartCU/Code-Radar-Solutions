// Your code here...
#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int first = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[0]) {
                printf("%d\n", arr[i]);
                return 0;
            }
        } else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}