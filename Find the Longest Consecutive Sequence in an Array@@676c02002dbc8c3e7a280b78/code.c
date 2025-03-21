// Your code here...

#include <stdio.h>
#include <stdbool.h>

// 100 4 200 1 3 2
// loop i to N
//  -> 100 =>  findNext(100 + 1) // 101 ? oui cont
                // -> ++count;

bool findNext(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return true;
    }
    return false;
}

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
        int next = arr[i] + 1;
        int count = 1;
        while (findNext(arr, n, next)) {
            ++count;
            next += 1;
        }
        if (count > max) {
            max = count;
        }
    }
    printf("%d", max);
    return 0;
}