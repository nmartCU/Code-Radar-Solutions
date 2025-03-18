// Your code here...

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[idx]) {
                idx = j;
            }
        }
        if (idx != i)
            swap(&arr[i], &arr[idx]);
    }
}

int kthSmallest(int *arr, int n, int k)
{
    selectionSort(arr, n);
    if (k > n)
        return - 1;
    return arr[k - 1];
}