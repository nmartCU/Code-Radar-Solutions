// Your code here...

int findOccurrence(int *arr, int n, int target, char mode)
{
    
    if (mode == 'F') {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target)
                return i;
        }
        return - 1;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == target)
            return i;
    }
    return - 1;
}