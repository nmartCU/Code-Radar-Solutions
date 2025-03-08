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
    char *str[2] = {NULL, NULL};
    size_t len[2] = {0, 0};
    ssize_t read[2] = {0, 0};
    int size = 0;
        
    for (int i = 0; i < 2; i++) {
        if ((read[i] = getline(&str[i], &len[i], stdin)) == -1) {
            for (int j = 0; j < i; j++) {
                free(str[j]);
            }
            return ERROR;
        }
        if (str[i] && read[i] > 0 && str[i][read[i] - 1] == '\n') {
            str[i][read[i] - 1] = '\0';
        }
    }
    if (printf("%s", str[0]) < 0) {
        free(str[0]);
        free(str[1]);
        return ERROR;
    }
    if (printf("%s\n", str[1][i]) < 0) {
        free(str[0]);
        free(str[1]);
        return ERROR;
    }
    free(str[0]);
    free(str[1]);
    return SUCCESS;
}