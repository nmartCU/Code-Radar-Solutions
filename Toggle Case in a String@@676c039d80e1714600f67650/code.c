// Your code here...
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define ERROR 1

typedef enum {
    LOWER,
    UPPER,
    NONE,
} Chartype_t;

int is_alpha(char c)
{
    if (c >= 'A' && c <= 'Z')
        return UPPER;
    if (c >= 'a' && c <= 'z')
        return LOWER;
    return NONE;
}

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }

    for (int i = 0; str[i]; i++) {
        int res = is_alpha(str[i]);
        if (res == LOWER) {
            str[i] = str[i] - 32;
        } else if (res == UPPER) {
            str[i] = str[i] + 32;
        }
    }
    if ((printf("%s\n", str)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}