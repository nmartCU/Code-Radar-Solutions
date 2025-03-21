// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int getNthBit(int x, int n)
{
    return (x >> n) & 1;
}

int main(int argc, char *const av [])
{
    int number = 0, position = 0;
    if ((scanf("%d %d", &number, &position)) != 2) {
        printf("Error");
        return ERROR;
    }
    int res = number | (1 << position - 1);
    if ((printf("%d\n", (res))) < 0)
        return ERROR;
    return SUCCESS;
}