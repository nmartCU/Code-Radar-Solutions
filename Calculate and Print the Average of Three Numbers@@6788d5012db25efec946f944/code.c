// Your code here...
// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a,b,c = 0;
    if ((scanf("%d %d %d \n", &a, &b, &c)) != 3)
        return ERROR;
    if ((printf("Average: %0.2f\n", ((a + b + c) / 3))) < 0)
        return ERROR;
    return SUCCESS;
}