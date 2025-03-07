// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int main, char *const av[])
{
    char str[MAX_LENGTH] = [0];

    if ((scanf("%s", &str)) != 1)
        return ERROR;
    if ((printf("You entered: %s", str)) < 0)
        return ERROR;
    return SUCCESS;
}