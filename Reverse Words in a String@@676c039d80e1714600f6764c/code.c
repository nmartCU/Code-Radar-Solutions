// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

void reverse(char *str, int start, int end)
{
    for (int i = start; i < end; i++) {
        char temp = str[i];
        str[i] = str[end - i];
        str[end - i] = temp; 
    }
}

int main(int argc, char *const argv[])
{
    char *str = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int size = 0;
    int lenghtWord = 0;

    if ((read = getline(&str, &len, stdin)) == -1) {
        free(str);
        return ERROR;
    }
    size = read - 1;
    for (int i = 0; i < size; i++) {
        if (str[i] == ' ') {
            reverse(str, lenghtWord, i - 1);
            lenghtWord += i; 
        }
    }
    if ((printf("%s\n", str)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}