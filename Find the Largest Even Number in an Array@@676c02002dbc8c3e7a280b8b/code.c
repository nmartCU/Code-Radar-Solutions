// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int max = -2000;
    int pos = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] % 2 == 0 && arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }
    printf("%d", pos == -1 ? -1 : arr[pos]);
    return 0;
}