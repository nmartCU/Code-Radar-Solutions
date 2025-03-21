// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;
    int max = 0;
    int val = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (temp == arr[j]) {
                ++count;
            }
        }
        if (max < count) {
            max = count;
            val = temp;
        }
    }
    printf("%d", val);
    return 0;
}