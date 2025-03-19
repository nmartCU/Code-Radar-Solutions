// Your code here...

#include <stdio.h>
#include <string.h>

#define MAX 255

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int occ[MAX];

    memset(occ, 0, sizeof(occ));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        ++occ[arr[i]];
    }

    for (int i = 0; i < MAX; i++) {
        if (occ[i] >= 1) {
            printf("%d ", occ[i]);
        }
    }
    return 0;
}