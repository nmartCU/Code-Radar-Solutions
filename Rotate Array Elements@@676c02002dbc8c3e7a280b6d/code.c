// Your code here...

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 0;
    int k = 0;
    int j = 0;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for (int i = k; i >= 0; i--) {
        swap(&arr[i], arr[j]);
        ++j;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}