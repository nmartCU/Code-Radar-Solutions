// Your code here...

int mySearch(int arr[], int n, int target, int low, int high)
{
    if (high < low)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] > target)
        return mySearch(arr, n, target, low, mid - 1);
    return mySearch(arr, n, target, mid + 1, high);
}

int binarySearch(int arr[], int n, int target)
{
    return mySearch(arr, n, target, 0, n - 1);
}