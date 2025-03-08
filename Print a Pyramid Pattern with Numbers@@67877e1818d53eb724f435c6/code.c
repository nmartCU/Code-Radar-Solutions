// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int n = 0;
    
    if (scanf("%d", &n) != 1)
        return ERROR;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if ((printf(" ", j)) < 0)
                return ERROR;
        }
        for (int j = 1; j < ( 2 * i - 1); j++) {
            if ((printf("%d ", j)) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
    return SUCCESS;
}