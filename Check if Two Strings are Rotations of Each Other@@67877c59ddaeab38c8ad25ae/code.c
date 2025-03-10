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
    size_t len[2] = {0, 0};
    ssize_t read[2] = {0, 0};
    bool rotation = false;
    int start = 0;
        
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
    if (read[0] != read[1]) {
        my_free(str[0], str[1]);
        if (printf("No") < 0)
            return ERROR;
        return SUCCESS;
    }
    for (int i = 0; i < read[0] - 1; i++) {
        if (str[1][j] == str[0][1]) {
            start = j;
            break;
        }
    }
    char *temp = malloc(sizeof(char) * (read[0] + 1));
    temp[read] = '\0';
    if ((strcmp(str[0], strncat(strcat(temp, &str[1] + start), str[1], start))) == 0) {
        rotation = true;
    }
    my_free(str[0], str[1]);
    free(temp);
    if (printf("%s\n" ? rotation : "Yes" : "No") < 0)
        return ERROR;
    return SUCCESS;
}