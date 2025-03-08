// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

void my_free(char *str, char *str2)
{
    free(str);
    free(str2);
}

int main(int argc, char *const argv[])
{
    char *str[2] = {NULL, NULL};
    char *result = NULL;
    size_t len[2] = {0, 0};
    ssize_t read[2] = {0, 0};
    int size = 0;
        
    for (int i = 0; i < 2; i++) {
        if ((read[i] = getline(&str[i], &len[i], stdin)) == -1) {
            for (int j = 0; j < i; j++)
                free(str[j]);
            return ERROR;
        }
        if (str[i] && read[i] > 0 && str[i][read[i] - 1] == '\n') {
            str[i][read[i] - 1] = '\0';
            --read[i];
        }
    }
    size = read[0] + read[1];
    if ((result = malloc(sizeof(char) * (size + 1))) == NULL) {
        my_free(str[0], str[1]);
        return ERROR;
    }
    result[size] = '\0';
    for (int i = 0; str[0][i] != '\0'; i++)
        result[i] = str[0][i];
    for (int j = 0; str[1][j] != '\0'; j++) {
        result[j + read[0]] = str[1][j];
    }
    if (printf("%s", result) < 0) {
        my_free(str[0], str[1]);
        free(result);
        return ERROR;
    }
    my_free(str[0], str[1]);
    free(result);
    return SUCCESS;
}