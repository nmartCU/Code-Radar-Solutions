// Your code here...

int mySearch(int arr[], int n, int target, int low, int high)
{
    if (high < low)
        return -1;
    int mid = low + (high - low) / 2;
    if (mid == target)
        return mid;
    if (mid > target)
        return mySearch(arr, n, target, mid - 1, high);
    return mySearch(arr, n, target, low, mid -1);
}

int binarySearch(int arr[], int n, int target)
{
    int low = arr[0];
    int hight = arr[n - 1];
    return mySearch(arr, n, target, low, hight)
}