// Your code here...

void printArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);
}

void insertionSort(char arr[], int n)
{
    for (int i = 1; i < n; i++) {
        int idx = i - 1;
        while (idx >= 0 && arr[i] < arr[idx]) {
            arr[idx + 1] = arr[idx];
            --idx;
        }
        arr[idx + 1] = arr[i];       
    }
}