// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main()
{
    char c = 0;
    if ((scanf("%c", &c)) != 1) {
        printf("Error scanf");
        return ERROR;
    }
    if (printf("You entered: %c", c) == -1) {
        return ERROR;
    };
    return SUCCESS;
}