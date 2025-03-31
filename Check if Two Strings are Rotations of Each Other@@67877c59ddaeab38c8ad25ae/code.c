// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256
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
    size_t len[INPUT_LENGTH] = {0, 0};
    ssize_t read[INPUT_LENGTH] = {0, 0};
    bool rotation = false;
    char *temp = NULL;
    int start = 0;
        
    for (int i = 0; i < INPUT_LENGTH; i++) {
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
    if (read[0] != read[1]) {
        my_free(str);
        if (printf("No") < 0)
            return ERROR;
        return SUCCESS;
    }
    for (int i = 0; i < read[0] - 1; i++) {
        if (str[1][i] == str[0][0]) {
            start = i;
            break;
        }
    }
    if ((temp = malloc(sizeof(char) * (read[0] + 1))) == NULL) {
        my_free(str);
        return ERROR;
    }
    temp[read[0]] = '\0';
    int index = 0;
    for (int i = start; i < read[0] - 1; i++) {
        temp[index++] = str[1][i]; 
    }
    int res = read[0] - 1 - index;
    for (int i = 0; i < res; i) {
        temp[index++] = str[1][i];
    }
    if ((strcmp(str[0], temp)) == 0) {
        rotation = true;
    }
    my_free(str);
    free(temp);
    if (printf("%s\n", rotation ? "Yes" : "No") < 0)
        return ERROR;
    return SUCCESS;
}