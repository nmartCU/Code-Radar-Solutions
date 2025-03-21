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

    if (n == 1) {
        printf("-1");
        return 0;
    }

    int min = 2000;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);
            int smaller = arr[i] < arr[j] ? arr[i] : arr[j];
            int bigger = arr[i] < arr[j] ? arr[j] : arr[i];

            if (diff < min) {
                min = diff;
                a = smaller;
                b = bigger;
            } else if (diff == min) {
                if (smaller < a || (bigger < b)) {
                    a = smaller;
                    b = bigger;
                }
            }
        }
    }
    printf("%d %d", a, b);
    return 0;
}