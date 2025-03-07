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
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= (a + i - 1); j++) {
            if (j <= (a - i)) {
                if ((printf(" ")) < 0)
                    return ERROR;
            } else if (j <= a) {
                if ((printf("%d", j - n - i)) < 0)
                    return ERROR;
            } else {
                if ((printf("%d", i)) < 0)
                    return ERROR;
            }
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
}