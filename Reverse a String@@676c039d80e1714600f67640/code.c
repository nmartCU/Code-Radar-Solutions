// Your code here...

#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char str[MAX_LENGTH] = {0};

    if (scanf("%s", &str) != 1)
        return ERROR;
    for (int i = strlen(str); i >= 0; i--) {
        if (printf("%c" , str[i]) < 0)
            return ERROR;
    }
    return SUCCESS;
}