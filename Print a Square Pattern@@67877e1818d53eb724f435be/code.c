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
    for (int i = 0; i < N * N; i++) {
        if ((printf("%s", (i % N == N - 1) ? "*\n" : "* ")) < 0)
            return ERROR;
    }
}