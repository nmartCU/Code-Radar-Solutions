// Your code here...
#include <stdio.h>

int main()
{
    float result = 0.0f;
    int error = scanf("%f", &result);
    if (error != 1) {
        printf("Error scanf %f result \n", result);
        return error;
    }
    printf("You entered %f", result);
    return 0;
}