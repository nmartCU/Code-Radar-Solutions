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
    for (int i = 0; i < a * a; i++) {
        if ((printf("%s", (i % a == a - 1) ? "*\n" : "* ")) < 0)
            return ERROR;
    }
    return SUCCESS;
}