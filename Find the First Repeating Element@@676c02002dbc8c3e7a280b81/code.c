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

    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        for (int j = 0; j < n; j++) {
            if (temp == arr[j] && i != j)
                printf("%d", temp);
                return 0;

        }
    }
    printf("-1");
    return 0;
}