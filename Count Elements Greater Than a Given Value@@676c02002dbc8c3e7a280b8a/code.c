// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int target = 0;

    scanf("%d", &target);
    printf("%d\n", target);

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            ++count;
    }
    printf("%d", count);
    return 0;
}