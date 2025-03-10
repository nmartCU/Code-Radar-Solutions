// Your code here...
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SUCCESS 0
#define ERROR 1
#define INPUT_LENGTH 2

void my_free(char **str)
{
    for (int i = 0; i < INPUT_LENGTH; i++) {
        free(str[i]);
    }
}

int main(int argc, char *const argv[])
{
    char *str[INPUT_LENGTH] = {NULL, NULL};
    size_t len[INPUT_LENGTH] = {0};
    ssize_t read[INPUT_LENGTH] = {0};
    bool sub = false;

    for (int i = 0; i < INPUT_LENGTH; i++) {
        if ((read[i] = getline(&str[i], &len[i], stdin)) == -1) {
            for (int j = 0; j < i; j++)
                free(str[j]);
            return ERROR;
        }
        if (read[i] > 0 && str[i] && str[i][read[i] - 1] == '\n') {
            str[i][read[i] - 1] = '\0';
            --read[i];
        }
    }

    for (int i = 0; str[0][i]; i++) {
        for (int j = 0; str[1][j]; j++) {
            if (str[0][i] == str[1][j]) {
                sub = false;
                continue;
            } else {
                break;
            }
        }
    }
    my_free(str);
    if ((printf("%s\n", sub ? "Yes" : "No")) < 0)
        return ERROR;
    return SUCCESS;
}