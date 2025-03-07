// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int number, position, mask = 0;
    if ((scanf("%d %d", &number, &position)) != 1) {
        printf("Error");
        return ERROR;
    }
    mask = (1 << number) - 1;
    if ((printf("%d\n", (number & mask))) < 0)
        return ERROR;
    return SUCCESS;
}