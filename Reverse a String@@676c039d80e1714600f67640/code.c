// Your code here...

#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    char str[MAX_LENGTH] = 0;

    if (scanf("%s", &str) != 1)
        return ERROR;
    if (printf(strrev(str)) < 0)
        return ERROR;
    return SUCCESS;
}