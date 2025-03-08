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
    int x = 0;
    for (int i = 1; i <= n; i++) {
        int start = (i % 2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; j++) {
            if ((printf("%d ", (--start))) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
    return SUCCESS;
}