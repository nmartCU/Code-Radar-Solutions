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

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    printf("%d", read);
    for (int i = 0; i < read - 1; i++) {
        char temp = str[read - 1 - i];
        str[read - 1 - i] = str[i];
        str[i] = temp; 
    }
    if ((printf("%s\n", str)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}