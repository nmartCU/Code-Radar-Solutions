// Your code here...
#include <stdio.h>

#DEFINE ERROR 1
#DEFINE SUCCESS 0

int main()
{
    char c = 0;
    if (scanf("%c", &c) != 1) {
        printf("Error scanf");
        return ERROR;
    }
    return SUCCESS;
}