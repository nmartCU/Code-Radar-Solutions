// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    // (a % 2) => CUZ if LSB == 1 then Odds AND if LSB == 0 then Even
    if ((printf("%s\n", (a & 1) ? "Set" : "Not Set")) < 0)
        return ERROR;
    return SUCCESS;
}