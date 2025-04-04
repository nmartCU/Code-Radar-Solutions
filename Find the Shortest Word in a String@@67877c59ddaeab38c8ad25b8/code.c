// Your code here...
// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int size = 0;
    int start = 0;
    int min = MAX_LENGTH;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        if (printf("%d\n", size) < 0) {
            free(str);
            return ERROR;
        }
        return ERROR;
    };
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }

    for (int i = 0; i < read; i++) {
        if (str[i] == ' ')
            continue;
        for (int j = i; j < read && str[j] != '\0' && str[j] != ' '; j++)
            ++size;
        if (size < min) {
            start = i;
            min = size;
        }
        i = i + size - 1;
        size = 0;
    }
    if (printf("%.*s\n", min, &str[start]) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}