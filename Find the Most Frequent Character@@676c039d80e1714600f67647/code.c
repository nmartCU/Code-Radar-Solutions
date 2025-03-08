// Your code here...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int occur[MAX_LENGTH] = {0};
    int max = 0;
    char letter = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    for (int i = 0; str[i]; i++) {
        char current = str[i];
        ++occur[current];
        if (occur[current] > max && occur[current] != max) {
            max = occur[current];
            letter = str[i];
        }
    }
    if (printf("%c", letter) < 0) {
        return ERROR;
    }
    return SUCCESS;
}