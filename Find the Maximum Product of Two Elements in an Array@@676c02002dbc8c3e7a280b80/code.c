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
        // 1 2 3 4 5
        // mul = 1;
        //  1 * 2 / 1 * 3 / 1 * 4 / 1 * 5 => 5 max
        // mul = 2
        //  2 * 1 / 2 * 3 
        for (int j = 0; j < n; j++) {
            int temp = mul * arr[j];
            if (temp > max && j != i) {
                max = temp;
            }
        }
    }

    printf("%d", max);
    return 0;
}