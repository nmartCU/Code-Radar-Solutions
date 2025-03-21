// Your code here...
#include <stdio.h>

int main()
{
    int n = 0;
    int pos = -1;
    int max = 2000;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n  - 1; i++) {
        int temp = arr[i];
        if (temp > arr[i + 1]) {
            pos = i;
        } 
    }
    printf("%d ", pos == -1 ? -1 : arr[pos]);
}