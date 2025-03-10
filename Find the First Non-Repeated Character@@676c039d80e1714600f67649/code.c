// Your code here...
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define ERROR 1

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    char c = 0;
    int size = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    size = read - 1;
    int letters[size] = {0};
    for (int i = 0; str[i]; i++) {
        ++letters[str[i]];
    } 

    for (int i = 0; str[i]; i++) {
        if (letters[str[i]] == 1) {
            c = str[i];
            break;
        }
    }
    if ((printf("%c\n", c == 0 ? '-' : c)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}