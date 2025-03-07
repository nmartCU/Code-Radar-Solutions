// Your code here...

#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a, b, c = 0;
    if ((scanf("%d %d %d", &a, &b, &c)) != 3)
        return ERROR;
    bool isEquilateral = (c == a && c == b)
    bool isIsocel = (!isEquilateral && ((a == b) || (b == c) || (c == a)))
    if ((printf("%s\n", (isEquilateral ? "Equilateral" : isIsocel ? "Isosceles" : "Scalene" ))) < 0)
        return ERROR;
    return SUCCESS;
}