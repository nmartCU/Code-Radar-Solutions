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
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        ++start;
        --end;
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
    if (str[read - 1] == '\n') {
        str[read - 1] = '\0';
        --read;
    }
    size = read - 1;
    for (int i = 0; i < size; i++) {
        printf("size= %d i= %d lentgh: %d\n", size, i, lenghtWord);
        if (str[i + 1] == ' ' || str[i + 1] == '\0') {
            reverse(str, lenghtWord, i);
            lenghtWord = i;
        }
    }
    if ((printf("%s\n", str)) < 0) {
        free(str);
        return ERROR;
    }
    free(str);
    return SUCCESS;
}