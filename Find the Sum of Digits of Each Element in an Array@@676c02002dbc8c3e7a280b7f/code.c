// Your code here...


#include <stdio.h>

int calc(int n)
{
    int temp = n;
    int sum = 0;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int sum = calc(arr[i]);
        arr[i] = sum;
    }

    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}