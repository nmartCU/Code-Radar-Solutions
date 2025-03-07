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
    
    for (int i = 0; i < a * a; i++) {
        int row = i / a;
        int col = i % a;
        if (row == 0 || row == a - 1 || col == 0 || col == a - 1) {
            if ((printf("%c", '*')) < 0)
                return ERROR;
        } else {
            if ((printf("%c", ' ')) < 0)
                return ERROR;
        }
        if (col == a - 1) {
            if ((printf("\n")) < 0)
                return ERROR;
        }
    } 
}