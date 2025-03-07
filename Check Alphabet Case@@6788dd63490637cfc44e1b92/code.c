// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    char c = 0;
    if ((scanf("%c", &c)) != 1)
        return ERROR;
    if ((printf("%s\n", (a >= 'A' && a <= 'Z') ? "Uppercase" : (a >= 'a' && a <= 'z') ? "Lowercase" : "Not an alphabet")) < 0)
        return ERROR;
    return SUCCESS;
}