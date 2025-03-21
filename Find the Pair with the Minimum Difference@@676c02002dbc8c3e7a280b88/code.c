// Your code here...

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n = 0;
    int k = 0;
    int a = 0;
    int b = 0;

    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1)
        return -1;

    int min = 2000;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = abs(arr[i] - arr[j]);
            if (temp < min) {
                min = temp;
                a = arr[i];
                b = arr[j];
            }
        }
    }
    printf("%d %d", a > b ? b : a, b > a ? a : b);
    return 0;
}