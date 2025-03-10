// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define ERROR 1

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    char letter = 0;
    int count = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    for (int i = 0; str[i]; i++) {
        letter = str[i];
        for (int j = 0; str[j]; j++) {
            if (letter == str[j]) {
                ++count;
                break;
            }
        }
        if (count >= 1) {
            break;
        }
    }
    if ((printf("%c\n", count >= 1 ? '-' : letter)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}