// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;
    int maj = 0;

    scanf("%d", &n);

    maj = n / 2;

    int arr[n];

    for (int i = 0; i < n ; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int elem = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (elem == arr[j]) {
                ++count;
            }
        }
        if (count > maj) {
            printf("%d", elem);
            return 0;
        }
    }
    printf("-1");
    return 0; 
}