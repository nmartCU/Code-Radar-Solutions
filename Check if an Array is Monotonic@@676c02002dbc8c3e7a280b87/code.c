// Your code here...

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    bool inc = false;
    bool dec = false;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            inc = true;
        } else if (arr[i] <= arr[i + 1]) {
            dec = true;
        }
        if (dec && inc) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;

}