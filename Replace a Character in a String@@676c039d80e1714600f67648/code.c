// Your code here...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

void my_free(char **str)
{
    for (int i = 0; str[i]; i++)
        free(str[i]);
}

int main(int argc, char *const argv[])
{
    char *str[3] = {NULL, NULL, NULL};
    char *result = NULL;
    size_t len[3] = {0, 0, 0};
    ssize_t read[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
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
    if ((result = malloc(sizeof(char) * (read[0] + 1))) == NULL) {
        my_free(str);
        return ERROR;
    }
    result[read[0]] = '\0';
    for (int i = 0; i < read[0]; i++) {
        char current = str[0][i];
        if (i < read[1] && i < read[2] && current == str[1][i]) {
            result[i] = str[2][i];
        } else {
            result[i] = current;
        }
    }
    if (printf("%s\n", result) < 0) {
        my_free(str);
        free(result);
        return ERROR;
    }
    my_free(str);
    free(result);
    return SUCCESS;
}