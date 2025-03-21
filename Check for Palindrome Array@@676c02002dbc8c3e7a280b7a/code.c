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
    
    int end = n -1
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[end]) {
            continue;
        } else {
            printf("NO");
            return 0;
        }
        --end;
    }
    printf("YES");
    return 0;
}