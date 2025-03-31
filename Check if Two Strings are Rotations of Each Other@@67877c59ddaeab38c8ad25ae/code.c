// Your code here...

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256
#define INPUT_LENGTH 2

void my_free(char **str)
{
    for (int i = 0; i < INPUT_LENGTH; i++) {
        free(str[i]);
    }
}

void swap(char a, char b)
{
    char temp = a;
    a = b;
    b = temp;
}

void rotate(char str[], int n)
{
    for (int i = n - 1; i > 0; i--) {
        swap(str[i], str[i - 1]);
    }
}

int main(int argc, char *const argv[])
{
    char str[INPUT_LENGTH][MAX_LENGTH];
    char temp[MAX_LENGTH];
    bool rotation = false;

    for (int i = 0; i < INPUT_LENGTH; i++) {
        scanf("%s", str[i]);
    }
    strcpy(temp, str[0]);
    printf("Temp: %s\n", temp)
    rotate(temp, strlen(str[0]));
    printf("%s\n", temp);
    if ((strcmp(str[0], temp)) == 0) {
        rotation = true;
    }
    if (printf("%s\n", rotation ? "Yes" : "No") < 0)
        return ERROR;
    return SUCCESS;
}