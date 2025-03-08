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
    for (int i = a; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if ((printf("%c ", (j - 1) + 'A')) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
    return SUCCESS;
}