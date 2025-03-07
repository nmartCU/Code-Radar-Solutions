// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    // (a * (a + 1) / 2)
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += (i + 1);
    }
    if ((printf("%d ", sum)) < 0)
        return ERROR;
    return SUCCESS;
}