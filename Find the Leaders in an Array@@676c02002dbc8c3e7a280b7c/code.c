// Your code here...

#include <stdio.h>
#include <stdbool.h>

bool findLeader(int *arr, int n, int i, int target)
{
    for (int j = i + 1; j < n; j++) {
        if (target >= arr[j])
            continue;
        else
            return false;
    }
    return true;
}

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

    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }
    
    for (int i = 0; i < n - 1; i++) {
        bool leader = findLeader(arr, n, i + 1, arr[i]);
        if (leader) {
            temp[idx] = arr[i];
            ++idx;
        }
    }
    for (int i = 0; i < idx; i++) {
        printf("%d ", arr[idx]);
    }
    return 0;
}