// Your code here...
// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    for (int i = 0; i < 10; i++) {
        int sum = a * (i + 1);
        if ((printf("%d x %d = %d\n", a, i + 1, sum)) < 0)
            return ERROR;
    }
    return SUCCESS;
}