// Your code here...
// Your code here...

#include <stdio.h>
#define MAX_VAL 200000

int main()
{
    int n = 0;
    int even = 0, odds = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            ++even;
        } else
            ++odds;
    }
    printf("%d %d", even, odds);
    return 0;
}