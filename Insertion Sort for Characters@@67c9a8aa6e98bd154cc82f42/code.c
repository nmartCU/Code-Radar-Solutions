// Your code here...

void printArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);
}

void insertionSort(char arr[], int n)
{
    for (int i = 1; i <= n; i++) {
        int idx = i;
        while (idx >= 0 && arr[i] > arr[idx]) {
            idx = i;
            --idx;
        }
        if (idx != i) {
            char temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        }        
    }
}