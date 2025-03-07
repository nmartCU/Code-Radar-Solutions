// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 2

int main(int argc, char *const argv[])
(
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    for (int i = a; i > 0; i--) {
        char str[i + 1] = {0};
        memset(str, '*', i);
        str[i] = '\0';
        printf("%s\n", str);
    }
)