// Your code here...

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pair_s {
    int a;
    int b;
} pair_t;

bool isNotPairInside(pair_t *pairs, int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if ((pairs[i].a == a && pairs[i].b == a) || (pairs[i].b == a && pairs[i].a == a))
            return false;
    }
    return true;
}

int main()
{
    int n = 0;
    int k = 0;
    int index = 0;

    scanf("%d", &n);

    int arr[n];

    pair_t *pairs = malloc(sizeof(pair_t) * (n * (n - 1) / 2));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                if (isNotPairInside(pairs, index, arr[i], arr[j])) {
                    pairs[index].a = arr[i];
                    pairs[index].b = arr[j];
                    index++;
                }
            }
        }
    }

    for (int i = 0; i < index; i++) {
        printf("%d %d\n", pairs[i].a, pairs[i].b);
    }
    
    return 0;
}