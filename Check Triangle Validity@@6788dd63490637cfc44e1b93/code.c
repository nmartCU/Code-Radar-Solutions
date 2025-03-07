// Your code here...
#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a, b, c = 0;
    if ((scanf("%d %d %d \n", &a, &b, &c)) != 3)
        return ERROR;
    bool valid = ((a + b) <= c || (a + c) <= b || (b + c) <= a);
    if ((printf("%s\n", (!valid) ? "Valid" : "Invalid")) < 0)
        return ERROR;
    return SUCCESS;
}