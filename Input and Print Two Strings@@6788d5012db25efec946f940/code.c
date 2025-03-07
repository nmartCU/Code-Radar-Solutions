// Your code here...

#include <stdio.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const av [])
{
    char str[MAX_LENGTH], str2[MAX_LENGTH] = {0};

    if ((scanf("%s %s \n", str, str2)) != 2)
        return ERROR;
    if ((printf("You entered: %s and %s\n", str, str2)) < 0)
        return ERROR;
    return SUCCESS;
}