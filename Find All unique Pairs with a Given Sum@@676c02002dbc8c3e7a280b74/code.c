// Your code here...

#include <stdio.h>
#include <stdlib.h>

typedef struct pair_s {
    int a;
    int b;
} pair_t;

int main()
{
    int n = 0;
    int k = 0;
    int index = 0;

    scanf("%d", &n);

    int arr[n];

    pair_t *pairs = malloc(sizeof(pair_t) * (n + 1));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        for (int j = 0; j < n; j++) {
            if (temp + arr[j] == k && j != i) {
                pairs[index].a = temp;
                pairs[index].b = arr[j];
                index++;
            }
        }
    }

    for (int i = 0; i < index; i++) {
        printf("%d %d\n", pairs[index].a, pairs[index].b);
    }
    
    return 0;
}