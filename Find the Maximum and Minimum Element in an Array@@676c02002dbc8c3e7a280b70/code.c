// Your code here...

#include <stdio.h>
#define MAX_VAL 200000

int main()
{
    int n = 0;
    int i = 0;
    int min = -MAX_VAL;
    int max = MAX_VAL;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int end = n - 1;
    int pos = 0, pos2 = 0;
    while (i < n) {
        if (arr[i] > min) {
            min = arr[i];
            pos = i;
        }
        if (arr[end] < max) {
            max = arr[end];
            pos2 = end;
        }
        --end;
        ++i;
    }
    printf("%d %d", arr[pos], arr[pos2]);
    return 0;
}