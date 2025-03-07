// Your code here...
#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

bool isSquare(int a, int i)
{
}

int main(int argc, char *const av [])
{
    int a, b = 0;
    if ((scanf("%d %d", &a, &b)) != 2)
        return ERROR;
    if ((printf("%s\n", (b * b == a) ? "Yes" : "No")) < 0)
        return ERROR;
    return SUCCESS;
}