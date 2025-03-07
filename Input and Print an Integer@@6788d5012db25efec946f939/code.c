// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av[])
{
    int x = 0;

    if ((scanf("%d", x)) != 1) {
        return ERROR;
    }
    if ((printf("You entered: %x\n", x)) < 0) {
        return ERROR;
    }
    return SUCCESS;
}