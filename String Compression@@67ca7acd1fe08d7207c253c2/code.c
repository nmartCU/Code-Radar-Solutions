#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void compressString(char str[MAX_LEN], char compress[MAX_LEN * 2])
{
    int idx = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char temp = str[i];
        int count = 0;
        for (int j = i; str[j] != '\0' && temp == str[j]; j++) {
            ++count;
        }
        if (count > 0 && strrchr(compress, temp) == NULL) {
            compress[idx] = temp;
            if (count != 1) {
                compress[idx + 1] = count + '0';
                idx += 2;
            } else
                idx += 1;
        }
    }
    compress[idx] = '\0';
    if (strlen(compress) >= strlen(str)) {
        strcpy(compress, str);
    }
}
