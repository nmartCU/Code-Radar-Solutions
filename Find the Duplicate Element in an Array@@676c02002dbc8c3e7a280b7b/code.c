// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;
    int k = 0;
    int index = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                printf("%d",arr[i])
        }
    }    
    return 0;
}