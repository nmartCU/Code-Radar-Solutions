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
    for (int i = a; i > 0; i--) {
        int temp = i;
        while (temp < 0) {
            printf("* ");
            --temp;
        }
        printf("\n")
    }
}