// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int temp[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            temp[arr[i]] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (temp[i] == 0) {
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", n + 1);
    return 0;

}