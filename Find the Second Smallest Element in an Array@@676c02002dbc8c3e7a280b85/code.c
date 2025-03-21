// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int prev = -1;
    for (int i = 1; i < n; i++) {
        if (min < arr[i]) {
            prev = min;
            min = arr[i];
        }
    }
    printf("%d", prev);
    return 0;
}