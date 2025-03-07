// Your code here...
#include <stdio.h>

int main()
{
    float result = 0.0f;
    int error = scanf("Input \n ", &result);
    printf("You entered %f", result);
    return error;
}