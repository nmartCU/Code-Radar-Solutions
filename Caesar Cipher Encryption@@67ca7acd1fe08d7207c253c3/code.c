// Your code here...

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void caesarCipher(char message[MAX_LEN], int shift, char encrypted[MAX_LEN])
{
    for (int i = 0; i < strlen(message); i++) {
        if (message[i] != ' ')
            encrypted[i] = (unsigned char) message[i] + shift; 
    }
}