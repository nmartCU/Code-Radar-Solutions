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

    int max = 0;
    for (int i = 0; i < n; i++) {
        int start = arr[i] + 1;
        int count = 1;
        for (int j = i; j < n - 1; j++) {
            if (start == arr[j + 1]) {
                start = arr[j + 1] + 1;
                ++count;
            }
        }
        if (count > max) {
            max = count;
        }
    }
    printf("%d", max);
    return 0;
}