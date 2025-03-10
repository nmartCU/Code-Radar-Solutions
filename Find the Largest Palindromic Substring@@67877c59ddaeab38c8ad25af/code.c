// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

bool isPalindrome(char *str, int start, int end)
{
    while (start < end) {
        if (str[start] != str[end])
            return false;
        ++start;
        --end;
    }
    return true;
}

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int max = 0;
    int start = 0;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    };
    if (read > 0 && str && str[read - 1] == '\n') {
        read[read - 1] = '\0';
        --read;
    }
    for (int i = 0; i < read; i++) {
        for (int j = i; j < read; j++) {
            if (isPalindrome(str, i, j)) {
                int size = j - i + 1;
                if (size > max) {
                    max = size;
                    start = i;
                }
            }
        }
    }
    if ((printf("%.*s", max, &str[start])) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}