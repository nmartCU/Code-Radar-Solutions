// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    float a = 0;
    if ((scanf("%0.2f \n", &a)) != 1)
        return ERROR;
    if ((printf("You entered: %0.4f\n", a)) < 0)
        return ERROR;
    return SUCCESS;
}