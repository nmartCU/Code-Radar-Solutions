// Your code here...
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int grade = 0;
    
    if ((scanf("%d", &grade)) != 1)
        return ERROR;
    
    if ((printf("%s\n", (a >= 90 ? "A" : (a >= 80 && a < 90) ? "B" : (a >= 70 && a < 80) ? "C" : (a >= 60 && a < 70) ? 'D' : 'F'))) < 0)
        return ERROR;
    return SUCCESS;
}