// Your code here...

void searchInRotateArray(int *arr, int i, int target)
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}