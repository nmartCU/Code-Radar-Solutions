// Your code here...
#include <stdio.h>
#include <string.h>

#define ERROR 1
#define SUCCESS 2

int main(int argc, char *const argv[])
{
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}