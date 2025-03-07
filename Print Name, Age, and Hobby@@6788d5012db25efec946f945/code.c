// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const av [])
{
    char name[MAX_LENGTH], hobby[MAX_LENGTH] = {0};
    int age = 0;
    if ((scanf("%s %d %s \n", name, &age, hobby)) != 3)
        return ERROR;
    if ((printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby)) < 0)
        return ERROR;
    return SUCCESS;
}