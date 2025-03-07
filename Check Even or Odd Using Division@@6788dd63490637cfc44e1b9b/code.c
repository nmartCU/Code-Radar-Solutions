#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

bool isDivisble(int a)
{
    int res = 0;
    while ((res = a / 2) != 0) {
        a = res;
    }
    if (res == 0) {
        return true;
    }
    return false;
}

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d", &a)) != 1)
        return ERROR;
    if ((printf("%s\n", (isDivisble(a)) ? "Even" : "Odd")) < 0)
        return ERROR;
    return SUCCESS;
}