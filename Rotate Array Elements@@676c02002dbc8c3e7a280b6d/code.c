// Your code here...
#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 0;
    int k = 0;

    scanf("%d", &n);
    int arr[n];
    int end = n - 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int idx = 0;
    while (idx < k) {
        for (int i = end; i >= 0; i--) {
            swap(&arr[i], &arr[i - 1]);
        }
        ++idx;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}