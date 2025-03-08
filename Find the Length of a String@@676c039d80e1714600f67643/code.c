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
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int size = 0;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        if (printf("%d\n", size) < 0) {
            free(str);
            return ERROR;
        }
        return ERROR;
    };
    
    for (int i = 0; str[i] != '\0'; i++) {
        ++size;
    }
    if (printf("%d\n", size) < 0) {
        free(str);
        return ERROR;
    }    
    free(str);
    return SUCCESS;
}