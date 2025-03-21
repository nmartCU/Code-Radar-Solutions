// Your code here...
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a = 0;
    
    if ((scanf("%d", &a)) != 1)
        return ERROR;
    char grade = (a >= 90) ? 'A' : (a >= 80 && a < 90) ? 'B' : (a >= 70 && a < 80) ? 'C' : (a >= 60 && a < 70) ? 'D' : 'F';
    if ((printf("%c\n", grade)) < 0)
        return ERROR;
    return SUCCESS;
}