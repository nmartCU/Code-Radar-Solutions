// Your code here...

void printArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);
}

void insertionSort(char arr[], int n)
{
    for (int i = 1; i <= n; i++) {
        int idx = i - 1;
        char temp = arr[idx];
        while (idx >= 0 && temp < arr[i]) {
            arr[idx + 1] = arr[idx];
            --idx;
        }
        if (idx != i) {
            char temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        }        
    }
}