// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[]) {
    int n = 0;
    
    if (scanf("%d", &n) != 1)
        return ERROR;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if ((printf("%c ", j - '0')) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
    return SUCCESS;
}