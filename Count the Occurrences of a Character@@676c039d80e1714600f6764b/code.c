// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256
#define INPUT_LENGTH 2

void my_free(char **str)
{
    for (int i = 0; i < INPUT_LENGTH; i++)
        free(str[i]);
}

int main(int argc, char *const argv[])
{
    char *str[INPUT_LENGTH] = {NULL, NULL};
    size_t len[INPUT_LENGTH] = {0};
    ssize_t read[INPUT_LENGTH] = {0};
    int size = 0;
    int count = 0;

    for (int i = 0; i < INPUT_LENGTH; i++) {
        if ((read[i] = getline(&str[i], &len[i], stdin)) == -1) {
            for (int j = 0; i < i; i++)
                free(str[j]);
        }
        if (read[i] > 0 && str[i] && str[i][read[i] - 1] == '\n') {
            str[i][read[i] - 1] = '\0';
            --read[i];
        }
    }
    size = strlen(str[0]) - 1;

    for (int i = 0; i < size; i++) {
        if (i < read[1] && str[1][i] == str[0][i])
            ++count;
    }
    my_free(str);
    if ((printf("%d\n", count)) < 0)
        return ERROR;
    return SUCCESS;
}