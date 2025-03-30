// Your code here...

#include <stdio.h>

#define MAX_RANKED 200000

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int ranked[MAX_RANKED], int n)
{
    for (int i = 1; i < n; i++) {
        int temp = ranked[i];
        int idx = i - 1;
        while (idx >= 0 && temp < ranked[idx]) {
            ranked[idx + 1] = ranked[idx];
            --idx;
        }
        ranked[idx + 1] = temp;
    }
}

void bubbleSort(int ranked[MAX_RANKED], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ranked[j] > ranked[j + 1]) {
                swap(&ranked[j], &ranked[j + 1]);
            }
        }
    }
}

void selectionSort(int ranked[MAX_RANKED], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (ranked[idx] > ranked[j]) {
                idx = j;
            }
        }
        if (idx != i)
            swap(&ranked[i], &ranked[idx]);
    }
}

void trackPlayerRanks(int ranked[MAX_RANKED], int n, int player[MAX_RANKED], int m, int result[MAX_RANKED])
{
    for (int i = 0; i < n; i++) {
        printf("%d ", ranked[i]);
    }
    // 100 100 50 40 40 20 10
    // 5 25 50 120

    // RESULT = 6 4 2 1
    // 6 =>
    // car ranked[0] = 100 && ranked[1] = 100 == 1
    //     ranked[2] = 50 == 2 / ranked[3] && ranked[4] = 40 == 3 / ranked[5] = 20 == 4 / ranked[6] = 10 == 5 et 6 == 6
    // 4 =>
    // car 100 100 == 1 / 50 == 2 / 40 40 == 3 / 25 == 4 / 20 == 5 ...

    // parcours mon result 5 25 50 120 => 5


    // int rank = 1
    // parcours mon leaderBoard 100 100 50 40 40 20 10
    //     100 (i = 0) = 1;
    //     100 (i = 1) = 1; prochain different rank + 1
    //     50  (i = 2) = 2; prochain different rank + 1
    //     40  (i = 3) = 3; 
    //     40  (i = 4) = 3; prochain different rank + 1
    //     20  (i = 5) = 4; prochain different rank + 1
    //     10  (i = 6) = 
    //     tant que le prochain == current
    //           result[i] = rank
    int rank = 1;
    for (int i = 0; i < n - 1; i++) {
        if (ranked[i] != ranked[i + 1]) {
            rank++;
        }
        result[i] = rank;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}