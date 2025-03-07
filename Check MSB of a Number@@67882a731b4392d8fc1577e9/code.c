// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1) {
        printf("Error");
        return ERROR;
    }
    int mbs = 0;
    if (a == 0) {
        if ((printf("%s\n", "Not Set")) < 0)
            return ERROR;
        return SUCCESS;
    }
    while (a != 0) {
        a/=2;
        mbs++;
    }
    if ((printf("%s\n", (1 << (mbs - 1)) ? "Set" : "Not Set")) < 0)
        return ERROR;
    return SUCCESS;
}