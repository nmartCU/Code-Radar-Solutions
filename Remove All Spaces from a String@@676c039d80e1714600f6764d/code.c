// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256


int main(int argc, char *const argv[])
{
    char *str = NULL;
    char *res = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    if ((res = malloc(sizeof(char) * (read + 1))) == NULL) {
        free(str);
        return ERROR;
    }
    res[read] = '\0';
    for (int i = 0; i < read; i++) {
        printf("read: %d i: %d %c\n", read, i, str[i]);
        if (str[i] != ' ' && str[i] != '\0') {
            printf("Inside %c\n res:%s", str[i], res);
            res[i] = str[i];
        }
    }
    if ((printf("%s\n", res)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}