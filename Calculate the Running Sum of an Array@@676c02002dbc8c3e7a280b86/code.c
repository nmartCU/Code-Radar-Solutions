// Your code here...

#include <stdio.h>

int sumOfAll(int arr[], int i)
{
    int sum = arr[0];

    for (int j = 1; j <= i; j++) {
        sum += arr[j];
    }
    return sum;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int temp[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        temp[i] = sumOfAll(arr, i);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    return 0;

}