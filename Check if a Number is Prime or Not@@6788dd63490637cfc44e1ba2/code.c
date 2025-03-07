// Your code here...
#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d", &a)) != 1)
        return ERROR;
    bool divisibleBy1 = (a % 1 == 0);
    bool divisibleByItSelf = (a % a == 0);
    if ((printf("%s\n", (a > 1 && (divisibleBy1 && divisibleByItSelf) && a % 2 != 0) ? "Prime" : "Not Prime")) < 0)
        return ERROR;
    return SUCCESS;
}