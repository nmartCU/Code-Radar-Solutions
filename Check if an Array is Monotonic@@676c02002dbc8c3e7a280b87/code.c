// Your code here...

#include <stdio.h>

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
        if (arr[i] > arr[i - 1]) {
            if (flag == 0)
                flag = 1;
            else if (flag == -1) {
                printf("NO");
                return 0;
            }     
        } else if (arr[i] < arr[i - 1]) {
            if (flag == 0)
                flag = -1;
            else if (flag == 1) {
                printf("NO");
                return 0;
            }  
        }
    }
    printf("YES");
    return 0;

}