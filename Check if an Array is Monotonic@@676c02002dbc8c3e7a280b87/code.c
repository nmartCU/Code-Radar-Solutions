// Your code here...

#include <stdio.h>
#include <stdbool.h>

bool setFlag(int *flag, int val, int comp)
{
    if (*flag == 0)
        *flag = val;
    else if (*flag == comp) {
        printf("NO");
        return false;
    }
    return true;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int flag = 0;

    for (int i = 1; i < n; i++) {
        printf("I is %d and elem is %d < %d\n", i, arr[i], arr[i - 1]);
        if (arr[i] > arr[i - 1]) {
            printf("INside inc\n");
            bool temp = setFlag(&flag, 1, -1);
            printf("%d\n", flag);
            if (!temp)
                return 0;   
        } else if (arr[i] < arr[i - 1]) {
            printf("INside dec\n");
            bool temp = setFlag(&flag, -1, 1);
            printf("flag %d\n", flag);
            if (!temp)
                return 0;
        }
    }
    printf("YES");
    return 0;

}