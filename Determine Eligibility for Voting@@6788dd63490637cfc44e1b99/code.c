// Your code here...

#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    if ((printf("%s\n", (a >= 18 ? "Eligible" : "Not Eligible" ))) < 0)
        return ERROR;
    return SUCCESS;
}