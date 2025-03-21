// Your code here...

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int temp[n];
    int idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    int val = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        int temp = arr[i];
        for (int j = i + 1; j < n; i++) {
            if (temp == arr[j])
                ++count;
        }
        if (max < count) {
            max = count;
            val = arr[i];
        }
    }
    printf("%d", val);
    return 0;
}