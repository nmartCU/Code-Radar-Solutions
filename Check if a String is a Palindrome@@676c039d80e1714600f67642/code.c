// Your code here...
// Your code here...
// Your code here...

#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char str[MAX_LENGTH] = {0};
    int j = 0;

    if (scanf("%s", str) != 1)
        return ERROR;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != str[j]) {
            if ((printf("No")) < 0)
                return ERROR;
            return SUCCESS;
        }
        ++j;
    }
    if ((printf("Yes")) < 0)
        return ERROR;
    return SUCCESS;
}