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
        int mul = arr[i];
        for (int j = 0; j < n - i; j++) {
            int temp = mul * arr[j];
            if (temp > max) {
                max = temp;
            }
        }
    }

    printf("%d", max);
    return 0;
}