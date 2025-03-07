// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    if ((printf("%d ", (a * (a + 1) / 2))) < 0)
        return ERROR;
    return SUCCESS;
}