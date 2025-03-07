// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[]) {
    int n;
    
    if (scanf("%d", &n) != 1)
        return ERROR;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("%d ", j + 1);
        printf("\n");
    }
    
    return SUCCESS;
}