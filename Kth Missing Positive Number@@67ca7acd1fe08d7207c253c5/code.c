// Your code here...

int maxVal(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int findKthMissing(int arr[], int n, int k)
{
    // 2 3 4 7 11 -- 5
    // 1 = 1, 5 = 2, 6 = 3, 8 = 4, 9 = 5 => 5 == 5 => 9

    // 2 3 4 7 11
    // 0 1 1 1 0 0 1 0 0 0 1
    // k = 5 donc 
    // loop to temp:
    //      if (tep[i] == 0) val = i k-- ensuite if (k == 0) return val

    int sizeMax = maxVal(arr, n);
    int temp[sizeMax];

    for (int i = 0; i < sizeMax; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        temp[arr[i]] = 1;
    }

    int val = 0;

    for (int i = 1; i < sizeMax; i++) {
        if (temp[i] == 0) {
            val = i;
            printf("val is %d and k is %d\n", val, k);
            k--;
        }
        if (k == 0) {
            break;
        }
    }
    return val;
}