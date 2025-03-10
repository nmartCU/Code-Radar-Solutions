// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

static int is_delim(char c , char *delim)
{
    for (int i = 0; delim[i]; i++)
        if (c == delim[i])
            return 1;
    return 0;
}

static int count(char *src, char *delim)
{
    int nb = 0;

    for (int i = 0; src[i]; i++)
        if (!is_delim(src[i], delim) && is_delim(src[i + 1], delim))
            nb++;
    return nb;
}

static bool isPalindrome(char *str)
{
    int end = strlen(str) - 1;

    for (int i = 0; str[i]; i++) {
        if (str[i] != str[end])
            return false;
        --end;
    }
    return true;
}

int main(int argc, char *const argv[])
{
    char *str = NULL;
    char *temp = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int index = 0;
        
    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    };
    if (read > 0 && str && str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    int words = count(str, " ");
    if ((temp = malloc(sizeof(char) * (read - words + 1))) == NULL) {
        free(str);
        return ERROR;
    }
    temp[read - words] = '\0';
    for (int i = 0; i < read; i++) {
        if (str[i] != ' ') {
            char c = isalpha(str[i]) ? islower(str[i]) : str[i];
            printf("Inside %c\n", c);
            temp[index] = c; 
            ++index;
        }
    }
    free(str);
    printf("temp %s\n", temp);
    if ((printf("%s\n", isPalindrome(temp) ? "Yes" : "No")) < 0) {
        free(temp);
        return ERROR;
    }
    return SUCCESS;
}