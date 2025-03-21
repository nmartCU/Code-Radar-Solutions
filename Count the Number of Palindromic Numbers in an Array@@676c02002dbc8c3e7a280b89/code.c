// Your code here...

#include <stdio.h>

int countDigit(int n)
{
    int digits = 0;
    int temp = n;

    while (temp > 0) {
        temp /= 10;
        ++digits;
    }
    return digits;
}

int isPalindrome(int n)
{
    int digits = countDigit(n);
    int temp = n;
    int i = 0;
    int nums[digits];

    for (int i = 0; i < digits; i++) {
        nums[i] = temp % 10;
        temp /= 10;
    }

    int end = digits - 1;

    for (int i = 0; i < digits; i++) {
        if (nums[i] != nums[end])
            return 0;
        --end;
    }
    return 1;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count += isPalindrome(arr[i]);
    }
    printf("%d", count);
    return 0;
}