// Your code here...
// Your code here...
// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d \n", &a)) != 1)
        return ERROR;
    if ((printf("%s\n", (!(a > 0) ? "True" : "False"))) < 0)
        return ERROR;
    return SUCCESS;
}