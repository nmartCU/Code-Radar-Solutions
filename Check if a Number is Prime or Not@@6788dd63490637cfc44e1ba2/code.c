// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d", &a)) != 1)
        return ERROR;
    if ((printf("%s\n", (a > 1 && ((a % 1 == 0) && (a % a == 0)) || (a % 2 != 0)) ? "Prime" : "Not Prime")) < 0)
        return ERROR;
    return SUCCESS;
}