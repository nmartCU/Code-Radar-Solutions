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

void createRank(int ranked[MAX_RANKED], int n, int result[MAX_RANKED])
{
    int rank = 1;
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i-1]) {
            rank++;
        }
        result[ranked[i]] = rank;
    }
}

void trackPlayerRanks(int ranked[MAX_RANKED], int n, int player[MAX_RANKED], int m, int result[MAX_RANKED])
{
    for (int i = 0; i < m; i++) {
        int score = player[i];
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (score < ranked[j]) {
                if (j == 0 || ranked[j] != ranked[j - 1])
                    ++rank;
            } else
                break;
        }
        result[i] = rank;
    }
}