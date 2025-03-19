#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void convertDigitToChar(int *idx, int count, char compress[MAX_LEN * 2])
{
    int digits = 0;
    int temp = count;
    while (temp > 0) {
        temp /= 10;
        ++digits;
    }
    temp = count;
    for (int j = digits - 1; j >= 0; j--) {
        compress[(*idx) + j] = (temp % 10) + '0';
        temp /= 10;
    }
}


void compressString(char str[MAX_LEN], char compress[MAX_LEN * 2])
{
    int idx = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char temp = str[i];
        int count = 1;
        while (i + 1 < strlen(str) && str[i + 1] == temp) {
            ++count;
            ++i;
        }
        compress[idx++] = temp;
        if (count > 1) {
            convertDigitToChar(&idx, count, compress);
        }
    }
    compress[idx] = '\0';
    if (strlen(compress) >= strlen(str)) {
        strcpy(compress, str);
    }
}
