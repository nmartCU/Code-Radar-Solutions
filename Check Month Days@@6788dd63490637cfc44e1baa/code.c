// Your code here...

#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int numberOfDay(int a)
{
    if (a == 2)
        return 28;
    if (a == 8 || a == 12)
        return 31;
    return (a % 2 != 0) ? 31 : 30;
}

int main(int argc, char *const av [])
{
    int a = 0;

    if ((scanf("%d", &a)) != 1)
        return ERROR;

    if (a < 1 || a > 12) {
        if ((printf("Invalid month")) < 0)
            return ERROR;
        return ERROR;
    }
    
    if ((printf("%d\n", numberOfDay(a))) < 0)
        return ERROR;
    return SUCCESS;
}
