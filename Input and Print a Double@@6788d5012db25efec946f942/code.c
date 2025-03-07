// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    double a = 0.0f;
    if ((scanf("%lf \n", &a)) != 1)
        return ERROR;
    if ((printf("You entered: %0.4lf\n", a)) < 0)
        return ERROR;
    return SUCCESS;
}