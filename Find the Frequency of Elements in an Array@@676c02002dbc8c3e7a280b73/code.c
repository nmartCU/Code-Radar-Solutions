// Your code here...

#include <stdio.h>
#include <string.h>

#define MAX 255

typedef struct frequency_s {
    int freq;
    int elem;
} frequency_t

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    frequency_t *res = malloc(sizeof(frequency_t) * n);
    int index = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        bool state = false;
        for (int j = 0; j < index; j++) {
            if (arr[i] == res[j].elem) {
                ++res[j].freq;
                state = true;
                break;
            }
        }
        if (!state) {
            res[index].freq = 1;
            res[index].elem = arr[i];
            index++;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d %d", res[i].elem, res[i].freq);
    }
    return 0;
}