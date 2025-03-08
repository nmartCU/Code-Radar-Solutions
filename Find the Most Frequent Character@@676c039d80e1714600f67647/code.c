// Your code here...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int occur[MAX_LENGTH] = {0};
    int pos = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    for (int i = 0; str[i]; i++) {
        ++occur[str[i]];
    }
    for (int i = 1; i <= str[i]; i++) {
        if (occur[str[i]] > occur[str[i] - 1]) {
            pos = occur[i];
        }
    }
    printf("pos: %d", pos);
    if (printf("%d", str[pos]) < 0) {
        return ERROR;
    }
    return SUCCESS;
}