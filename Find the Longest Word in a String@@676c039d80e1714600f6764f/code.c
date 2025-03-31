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
    size_t len = 0;
    ssize_t read = 0;
    int index = 0;
    int start = 0;
    int max = 0;
    int sizeWord = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    if (str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    for (int i = 0; i < read; i++) {
        while (str[i] && str[i] != ' ') {
            ++sizeWord;
            ++i;
        }
        if (sizeWord > max) {
            max = sizeWord;
            start = i - max;
        }
        sizeWord = 0;
    }
    printf("%.*s\n", max, &str[start]);
    free(str);
    return SUCCESS;
}