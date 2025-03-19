// Your code here...

int main()
{
    int n = 0;
    
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            continue;
        } else {
            printf("Not sorted\n");
            return 0;
        }
    }
    printf("Sorted\n");
    return 0;
}