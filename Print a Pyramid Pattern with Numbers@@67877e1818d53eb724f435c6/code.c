// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[]) {
    int n;
    
    if (scanf("%d", &n) != 1)
        return ERROR;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d%s", j, j < i ? " " : "");
        printf("\n");
    }
    
    return SUCCESS;
}