// Your code here...
// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv [])
{
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            if ((printf("%c ", (j - 1) + 'A')) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
            return ERROR;
    }
}