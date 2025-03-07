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
    bool divisibleBy3 = (a % 3 == 0);
    bool divisibleBy5 = (a % 5 == 0);
    if ((printf("%s\n", (divisibleBy3 && divisibleBy5) ? "Divisible by Both" : (divisibleBy3) ? "Divisible by 3" : (divisibleBy5) ? "Divisible by 5" : "Not Divisible")) < 0)
        return ERROR;
    return SUCCESS;
}