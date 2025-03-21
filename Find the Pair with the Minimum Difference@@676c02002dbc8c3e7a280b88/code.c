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

    int min = 2000;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = arr[j] - arr[i];
            if (temp < min) {
                min = temp;
                a = arr[j];
                b = arr[i];
            }
        }
    }
    printf("%d %d", a, b);
    return 0;
}