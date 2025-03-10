// Your code here...
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define ERROR 1

enum Chartype {
    LOWER,
    UPPER,
    NONE,
};

Chartype is_alpha(char c)
{
    if (c >= 'A' && c <= 'Z')
        return Chartype.UPPER;
    if (c >= 'a' && c <= 'z')
        return Chartype.LOWER;
    return Chartype.NONE;
}
int main(int argc, char *const argv[])
{
    char *str[INPUT_LENGTH] = {NULL, NULL};
    size_t len[INPUT_LENGTH] = {0};
    ssize_t read[INPUT_LENGTH] = {0};

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (read > 0 && str && str[read[i] - 1] == '\n') {
        str[read[i] - 1] = '\0';
        --read;
    }

    for (int i = 0; str[i]; i++) {
        int res = is_alpha(str[i]);
        if (res == Chartype.LOWER) {
            str[i] = str[i] - 32;
        } else (res == Chartype.UPPER) {
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