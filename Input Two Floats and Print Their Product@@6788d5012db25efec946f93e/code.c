// Your code here...
// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    float a,b = 0;
    if ((scanf("%f %f \n", &a, &b)) != 2)
        return ERROR;
    if ((printf("Product: %0.2f\n", a * b)) < 0)
        return ERROR;
    return SUCCESS;
}