// Your code here...
#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

static const char *dayOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d", &a)) != 1)
        return ERROR;
    if ((printf("%s\n", (a >= 1 && a <= 7 ? dayOfWeek[a - 1] : "Invalid"))) < 0)
        return ERROR;
    return SUCCESS;
}