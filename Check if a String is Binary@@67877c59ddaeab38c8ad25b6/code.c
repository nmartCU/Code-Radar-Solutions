// Your code here...
// Your code here...
// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    bool notbin = false;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    };
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    for (int i = 0; i < read; i++) {
        printf("letter is %c\n", str[i]);
        if (str[i] != '0' || str[i] != '1') {
            printf("Inside");
            notbin = true;
            break;
        }
    }
    free(str);
    if ((printf("%s\n", notbin ? "No": "Yes")) < 0)
        return ERROR;
    return SUCCESS;
}