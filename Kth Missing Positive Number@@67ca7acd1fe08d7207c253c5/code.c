// Your code here...

int findKthMissing(int arr[], int n, int k)
{
    // 2 3 4 7 11 -- 5
    // 1 = 1, 5 = 2, 6 = 3, 8 = 4, 9 = 5 => 5 == 5 => 9

    // 2 3 4 7 11
    // kth = 0
    // par a temp = 1
    //    je regarde si temp < arr[i] = 1 < 2
        // si true kth++ kth = 2 et je regarde si kth == k => stop return
        // sinon ++i 

    // 

    int temp = 1;
    int kth = 0;
    int index = 0;

    while (kth < k) {
        if (temp < arr[index]) {
            kth++;
            if (kth == k)
                return kth;
        } else {
            index++;
        }
        ++temp;
    }
    return kth;
}