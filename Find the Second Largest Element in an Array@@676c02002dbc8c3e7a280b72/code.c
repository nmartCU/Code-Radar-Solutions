// Your code here...
#include <stdio.h>

int main()
{
    int n = 0;
    int max = -2000;
    int pos = 0;
    int prev = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            pos = i == 0 ? : i - 1;
            max = arr[i];
        } 
    }
    printf("%d ", arr[pos]);
}