// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define INPUT_LENGTH 7

int main(int argc, char *const argv[])
{
    int n = 0;
    int total = 0;
    int value = 0;
        
    for (int i = 0; i < INPUT_LENGTH; i++) {
        if ((scanf("%d ", &value)) != 1) {
            return ERROR;
        }
        total += value;
    }
    printf("total %d", total);
    if ((printf("Average Temperature: %0.2f", (float) total / INPUT_LENGTH)) < 0)
        return ERROR;
    return SUCCESS;
}