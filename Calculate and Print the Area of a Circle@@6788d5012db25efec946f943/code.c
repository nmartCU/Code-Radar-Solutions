// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

int main(int argc, char *const av [])
{
    float radius = 0.0f;
    if ((scanf("%f \n", &radius)) != 1)
        return ERROR;
    if ((printf("Area: %0.2f", (radius * 3.14) * 10)) < 0)
        return ERROR;
    return SUCCESS;
}