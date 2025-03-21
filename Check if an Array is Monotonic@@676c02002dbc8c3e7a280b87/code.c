// Your code here...

#include <stdio.h>


int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if ((arr[i] + 1 == arr[i + 1]) || (arr[i] - 1 == arr[i + 1]))
            continue;
        else {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;

}