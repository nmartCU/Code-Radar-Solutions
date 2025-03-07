// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a, b, c = 0;
    if ((scanf("%d %d %d \n", &a, &b, &c)) != 3)
        return ERROR;
    if ((printf("%d", (a > b && a > c ? a : (b > a && b > c) ? b : c))) < 0)
        return ERROR;
    return SUCCESS
}