// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    if ((printf("* ")) < 0)
        return ERROR;
    for (int i = a; i > 0; i--) {
        for (int j = i; j > a; j--) {
            if ((printf("* ")) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
        return ERROR;
    }
}