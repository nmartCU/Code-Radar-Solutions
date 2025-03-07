// Your code here...
#include <stdio.h>


int main(int main, char *const av[])
{
    char *str = NULL;

    if ((scanf("%s", str)) != 1)
        return ERROR;
    if ((printf("You entered: %s", str)))
        return ERROR;
    return SUCCESS;
}