// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a, b = 0;
    if ((scanf("%d %d", &a, &b)) != 2)
        return ERROR;
    if ((printf("%s\n", (a >= b) ? "Yes" : "No")) < 0)
        return ERROR;
    return SUCCESS;
}