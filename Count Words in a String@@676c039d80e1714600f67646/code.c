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
    int wordCount = 0;
    bool inWord = false;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    };
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            inWord = false;
            continue;
        }
        if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }
    if (printf("%d\n", wordCount) < 0) {
        free(str);
        return ERROR;
    }    
    free(str);
    return SUCCESS;
}