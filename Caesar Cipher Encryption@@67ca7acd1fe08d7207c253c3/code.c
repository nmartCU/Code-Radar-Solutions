// Your code here...

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void caesarCipher(char message[MAX_LEN], int shift, char encrypted[MAX_LEN])
{
    for (int i = 0; i < strlen(message); i++) {
        if (message[i] >= 'a' && message[i] <= 'z')
            encrypted[i] = 'a' + (message[i] - 'a' + shift) % 26;
        else if (message[i] >= 'A' && message[i] <= 'Z')
            encrypted[i] = 'A' + (message[i] - 'a' + shift) % 26;
        else
            encrypted[i] = message[i];
    }
}