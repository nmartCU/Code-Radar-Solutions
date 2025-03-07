// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < (a + i); j++) {
            if (j < (a - i - 1)) {
                if ((printf(" ")) < 0)
                    return ERROR;
            } else {
                if ((printf("%d", i + 1)) < 0)
                    return ERROR;
            }
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
}