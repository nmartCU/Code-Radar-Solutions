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
    char letter = 0;

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
    letter = str[1][0];
    for (int i = 0; i < read[0]; i++) {
        if (strrchr("aeiou", str[0][i]))
            str[0][i] = letter; 
    }
    if ((printf("%s\n", str[0])) < 0)
        return ERROR;
    return SUCCESS;
}