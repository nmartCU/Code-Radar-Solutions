// Your code here...

#define MAX 200000

int findUnsortedSubarray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    int max = MAX;
    int min = -MAX;

    int start = 0;
    int end = -1;

    while (j >= 0) {
        if (arr[i] > min)
            min = arr[i];
        else 
            end = i;

        if (arr[j] < max)
            max = arr[j];
        else 
            start = j;
        --j;
        ++i;
    }
    return end - start - 1;
}