// Your code here...
// Your code here...
#include <stdio.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const av [])
{
    int a = 0;
    if ((scanf("%d ", &a)) != 1) {
        printf("Error");
        return ERROR;
    }
    bool res = (((a % 4) == 0) && ((a % 100) == 0) && ((a % 400) == 0));

    if ((printf("%s\n", (res) ? "Leap Year" : "Not a Leap Year")) < 0)
        return ERROR;
    return SUCCESS;
}