// Your code here...
#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv [])
{
    int a = 0;

    if ((scanf("%d ", &a)) != 1)
        return ERROR;
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i; j++) {
            if ((printf("%d ", j + 1)) < 0)
                return ERROR;
        }
        if ((printf("\n")) < 0)
            return ERROR;
    } 
}