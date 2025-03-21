// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int number = 0, position = 0;
    if ((scanf("%d %d", &number, &position)) != 1) {
        printf("Error");
        return ERROR;
    }
    int res = (number >> position) & 1;
    if ((printf("%d\n", (res))) < 0)
        return ERROR;
    return SUCCESS;
}