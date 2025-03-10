// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

bool isDuplicate(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i]; i++) {

    }
}

int main(int argc, char *const argv[])
{
    char *str = NULL;
    char *temp = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int letters[MAX_LENGTH] = {0};
    int index = 0;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    };
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    if ((temp = malloc(sizeof(char) * (read + 1))) == NULL) {
        free(str);
        return ERROR;
    }
    for (int i = 0; str[i]; i++) {
        ++letters[str[i]];
        if (letters[str[i]] == 1) {
            temp[index] = str[index];
            ++index;
        }
    }
    for (int i = 0; temp[i]; i++) {
        if ((printf("%c: %d\n", temp[i], letters[str[i]])) < 0) {
            free(str);
            return ERROR;
        }
    }
    free(str);
    return SUCCESS;
}