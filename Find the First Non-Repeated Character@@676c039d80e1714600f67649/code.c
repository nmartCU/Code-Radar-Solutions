// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SUCCESS 0
#define ERROR 1
#define MAX_LENGTH 255;

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    char letter = 0;
    int letters[MAX_LENGTH] = {0};

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }

    for (int i = 0; str[i]; i++)
        ++letters[str[i]];
    
    for (int i = 0; str[i]; i++) {
        if (letters[str[i]] > 1) {
            letter = str[i];
            break;
        }
    }
    if ((printf("%c\n", letter != '\0' ? letter : '-')) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}