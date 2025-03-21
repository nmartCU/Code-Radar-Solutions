// Your code here...

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 0;
    int k = 0;
    int temp = 0;
    int end = 0;


    scanf("%d", &n);
    end = n - 1;
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        temp = arr[end];
        for (int j = 0; j < n; j++) {
            swap(&temp, &arr[end - 1]);
            --end;
        }
        end = n - 1;
    }
}