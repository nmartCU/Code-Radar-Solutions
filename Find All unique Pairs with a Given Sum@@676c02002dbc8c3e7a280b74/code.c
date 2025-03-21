// Your code here...
// Your code here...

#include <stdio.h>

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
        for (int j = 0; j < n; i++) {
            if (temp + arr[j] == k && j != i) {
                pairs[index++].a = temp;
                pairs[index++].b = arr[j];
            }
        }
    }


    
    return 0;
}