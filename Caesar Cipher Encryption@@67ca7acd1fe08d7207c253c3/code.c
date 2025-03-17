// Your code here...

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void caesarCipher(char message[MAX_LEN], int shift, char encrypted[MAX_LEN])
{
    for (int i = 0; i < strlen(message) - 1; i++) {
        encrypted[i] = message[i] + 'a' + shift; 
    }
}