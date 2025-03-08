// Your code here...
// Your code here...

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char str[MAX_LENGTH] = {0};
    int vowels = 0;

    if (scanf("%s", str) != 1)
        return ERROR;
    for (int i = 0; i < strlen(str); i++) {
        char lower = tolower(str[i]);
        if ((strrchr("aeiouy", lower)) != NULL)
            ++vowels;
    }
    if ((printf("%d\n", vowels)) < 0)
        return ERROR;
    return SUCCESS;
}