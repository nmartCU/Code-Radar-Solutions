// Your code here...
// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1) {
        printf("Error");
        return ERROR;
    }
    if ((printf("%s\n", ((a % 2) == 0) ? "Even" : "Odd")) < 0)
        return ERROR;
    return SUCCESS;
}